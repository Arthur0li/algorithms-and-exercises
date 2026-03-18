// set the pins for the traffic light LEDs, button, and buzzer
int red1 = 1;
int yellow1 = 2;
int green1 = 3;

int red2 = 11;
int yellow2 = 12;
int green2 = 13;

int button = 7;
int buzzer = 8;

// variable to store the previous state of the button and whether there is a pedestrian request
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

// function to sound the buzzer for a specified duration
void beep(int duration_ms) {
  digitalWrite(buzzer, HIGH);
  delay(duration_ms);
  digitalWrite(buzzer, LOW);
}

// function that runs once when you press reset or power the board
void setup() {
  // set the LEDs pins as output and the button/buzzer pin as input
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);

  // initialize the traffic light to the default state
  Serial.begin(9600);

  // initialize the traffic light to the default state
  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);

  // initialize the pedestrian light to the default state
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);

  // read the initial state of the button
  prevButtonState = digitalRead(button);
}

// function to handle delays while checking for button presses
void smallDelayLoop(int totalMs) {
  int iterations = totalMs / CHECK_INTERVAL;
  int remainder = totalMs % CHECK_INTERVAL;

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
  int currentState = digitalRead(button);
  if (currentState != prevButtonState) {
    delay(50);
    int secondRead = digitalRead(button);
    if (secondRead == currentState) {
      if (currentState == HIGH && !ped_request) {
        ped_request = true;
        beep(100);
      }
      prevButtonState = currentState;
    }
  }
}

// function to handle the pedestrian crossing sequence when there is a pedestrian request
void pedestrianCrossing() {
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);

  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH);

  smallDelayLoop(PED_GREEN_TIME);

  int blinkTotal = 2000;
  int elapsed = 0;
  while (elapsed < blinkTotal) {
    digitalWrite(green2, !digitalRead(green2));
    smallDelayLoop(PED_BLINK_INTERVAL);
    elapsed += PED_BLINK_INTERVAL;
  }

  digitalWrite(green2, LOW);

  digitalWrite(yellow2, HIGH);
  smallDelayLoop(PED_YELLOW_TIME);
  digitalWrite(yellow2, LOW);

  digitalWrite(red2, HIGH);

  ped_request = false;
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);

  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);

  smallDelayLoop(CAR_GREEN_TIME);

  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(red1, LOW);

  smallDelayLoop(CAR_YELLOW_TIME);

  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);

  if (ped_request) {
    pedestrianCrossing();
  } else {
    smallDelayLoop(CAR_RED_BASE);
  }
}
