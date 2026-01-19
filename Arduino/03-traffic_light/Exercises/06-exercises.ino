int red1 = 1;
int yellow1 = 2;
int green1 = 3;

int red2 = 11;
int yellow2 = 12;
int green2 = 13;

int button = 7;
int buzzer = 8;

int prevButtonState = LOW;
bool ped_request = false;

int CHECK_INTERVAL = 50;

int CAR_GREEN_TIME = 4000;
int CAR_YELLOW_TIME = 2000;
int CAR_RED_BASE = 2000;
int PED_GREEN_TIME = 7000;
int PED_YELLOW_TIME = 3000;
int PED_BLINK_INTERVAL = 500;

void beep(int duration_ms) {
  digitalWrite(buzzer, HIGH);
  delay(duration_ms);
  digitalWrite(buzzer, LOW);
}

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);

  digitalWrite(green2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);

  prevButtonState = digitalRead(button);
}

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
