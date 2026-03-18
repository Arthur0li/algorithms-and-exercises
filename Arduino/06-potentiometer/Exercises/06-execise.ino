// set the pin numbers for the LEDs, the buzzer and the potentiometer
int ledPin1 = 3;
int ledPin2 = 6;
int ledPin3 = 9;
int buzzerPin = 5;
int pwmPin  = A0;

// variable to store the value read from the potentiometer
unsigned int readlevel;
int level;

// function that runs once when you press reset or power the board
void setup() {
  // set the LED pins and the buzzer pin as output and start the serial communication for debugging
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

// function to read the value from the potentiometer
int readPotentiometer(){
  // read the value from the potentiometer and return it
  readlevel = analogRead(pwmPin);
  return readlevel;
}

// functions to control the LEDs
void allOn() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
}
void firstSecondOnly() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
}
void firstOnly() {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}
void allOff() {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void controlLEDs(int level_var) {
  if (level_var >= 3) {
    allOn();
  } else if (level_var >= 2) {
    firstSecondOnly();
  } else if (level_var >= 1) {
    firstOnly();
  } else {
    allOff();
  }
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // read the value from the potentiometer, print it to the serial monitor for debugging, map it to a value between 0 and 3 and write it to the LEDs and the buzzer
  int level = readPotentiometer();

  level = map(level, 0, 1023, 0, 3);
  controlLEDs(level);

  delay(100);
}
