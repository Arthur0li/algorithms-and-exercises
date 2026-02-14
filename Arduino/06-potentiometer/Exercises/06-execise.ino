int ledPin1 = 3;
int ledPin2 = 6;
int ledPin3 = 9;
int buzzerPin = 5;
int pwmPin  = A0;

unsigned int readlevel;
int level;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

int readPotentiometer(){
  readlevel = analogRead(pwmPin);
  return readlevel;
}

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

void loop() {
  int level = readPotentiometer();

  level = map(level, 0, 1023, 0, 3);
  controlLEDs(level)

  delay(100);
}
