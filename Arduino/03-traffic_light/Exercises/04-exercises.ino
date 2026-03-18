// set the pins of the LEDs
int red1 = 1;
int yellow1 = 2;
int green1 = 3;

int red2 = 11;
int yellow2 = 12;
int green2 = 13;

// set the pin of the button
int button = 7;

// variable to store the previous state of the button
int prevButtonState = LOW;
bool ped_request = false;

// time intervals in milliseconds
int CHECK_INTERVAL = 50;

// Car traffic light timings
int CAR_GREEN_TIME = 4000;
int CAR_YELLOW_TIME = 2000;
int CAR_RED_BASE = 2000;
int PED_GREEN_TIME = 7000;
int PED_YELLOW_TIME = 3000;
int PED_BLINK_INTERVAL = 500;

// function that runs once when you press reset or power the board
void setup() {
  // set the LEDs pins as output and the button pin as input
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(button, INPUT);

  // initialize the traffic light to the default state
  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);

  digitalWrite(green2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);

  // read the initial state of the button
  prevButtonState = digitalRead(button);
}

// function to handle delays while checking for button presses
void smallDelayLoop(int totalMs) {
  // Calculate the number of iterations and the remainder for the delay
  int iterations = totalMs / CHECK_INTERVAL;
  int remainder = totalMs % CHECK_INTERVAL;

  // Loop for the calculated iterations, checking for button presses
  for (int i = 0; i < iterations; i++) {
    delay(CHECK_INTERVAL);
    checkButtonPress();
  }
  if (remainder > 0) {
    delay(remainder);
    checkButtonPress();
  }
}

// function to check for button presses and update the pedestrian request state
void checkButtonPress() {
  // read the current state of the button
  int currentState = digitalRead(button);

  // check if the button state has changed since the last check
  if (currentState != prevButtonState) {
    delay(50);
    int secondRead = digitalRead(button);
    if (secondRead == currentState) {
      if (currentState == HIGH && !ped_request) {
        ped_request = true;
      }
      prevButtonState = currentState;
    }
  }
}

// function to handle the pedestrian crossing sequence
void pedestrianCrossing() {
  // turn on the red light for cars and the green light for pedestrians
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);

  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH);

  // keep the pedestrian green light on for a while, then blink it before turning it off
  smallDelayLoop(PED_GREEN_TIME);

  int blinkTotal = 2000;
  int elapsed = 0;

  // blink the pedestrian green light for a while before turning it off
  while (elapsed < blinkTotal) {
    digitalWrite(green2, !digitalRead(green2));
    smallDelayLoop(PED_BLINK_INTERVAL);
    elapsed += PED_BLINK_INTERVAL;
  }

  // turn off the pedestrian green light and turn on the red light for pedestrians
  digitalWrite(green2, LOW);

  digitalWrite(yellow2, HIGH);
  smallDelayLoop(PED_YELLOW_TIME);
  digitalWrite(yellow2, LOW);

  digitalWrite(red2, HIGH);

  ped_request = false;
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // turn on the green LEDs for 4 seconds, then turn on the yellow LEDs for 2 seconds, then turn on the red LEDs for 2 seconds, then turn off all the LEDs for 2 seconds and repeat this cycle indefinitely
  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);

  // turn on the red light for pedestrians and the green light for cars
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);

  // keep the car green light on for a while, then transition to yellow and red, checking for pedestrian requests during the process
  smallDelayLoop(CAR_GREEN_TIME);

  // turn on the yellow light for cars, keeping the red light for pedestrians on
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(red1, LOW);

  // keep the car yellow light on for a while, then transition to red, checking for pedestrian requests during the process
  smallDelayLoop(CAR_YELLOW_TIME);

  // turn on the red light for cars and keep the green light for pedestrians on if there is a pedestrian request, otherwise keep the red light for pedestrians on
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);

  // check for pedestrian requests and handle the pedestrian crossing sequence if there is a request, otherwise keep the red light for pedestrians on for a while before transitioning back to green for cars
  if (ped_request) {
    pedestrianCrossing();
  } else {
    smallDelayLoop(CAR_RED_BASE);
  }
}
