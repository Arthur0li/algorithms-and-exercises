int lm35Pin = A0;
float temperature;
int ledPin = 3;
int ledPin2 = 4;
int ledPin3 = 5;
int buzzer = 6;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

float readTemperatureSensor() {

  float lm35;

  lm35 = (((analogRead(lm35Pin) * 5.0) / 1023) * 1000 - 500) / 10;

  Serial.println(lm35);

  return lm35;
}

void allOn() {
  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
}
void firstSecondOnly() {
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
}
void firstOnly() {
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}
void allOff() {
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
}

void controlLEDs(int temperature) {
  if (temperature > 70) {
    allOn();
  } else if (temperature > 50) {
    firstSecondOnly();
  } else if (temperature > 30) {
    firstOnly();
  } else {
    allOff();
  }
}

void loop() {

  float temperature = readTemperatureSensor();
  controlLEDs(temperature);
  delay(100);
}