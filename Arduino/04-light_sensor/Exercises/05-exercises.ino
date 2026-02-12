int ledPin_blue = 2;
int ledPin_yellow = 3;
int ledPin_white = 4;
int buzzer = 5;
int ldrPin = A0;

void setup() {
  pinMode(ledPin_blue, OUTPUT);
  pinMode(ledPin_yellow, OUTPUT);
  pinMode(ledPin_white, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

int readLightSensor(int ldrpin) {
  int ldrValor = analogRead(ldrpin);
  Serial.println(ldrValor);
  return ldrValor;
}

void controlBuzzer(int light) {
  if (light > 600) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }
}

void allOn() {
  digitalWrite(ledPin_blue, HIGH);
  digitalWrite(ledPin_yellow, HIGH);
  digitalWrite(ledPin_white, HIGH);
}
void blueYellowOnly() {
  digitalWrite(ledPin_blue, HIGH);
  digitalWrite(ledPin_yellow, HIGH);
  digitalWrite(ledPin_white, LOW);
}
void blueOnly() {
  digitalWrite(ledPin_blue, HIGH);
  digitalWrite(ledPin_yellow, LOW);
  digitalWrite(ledPin_white, LOW);
}
void allOff() {
  digitalWrite(ledPin_blue, LOW);
  digitalWrite(ledPin_yellow, LOW);
  digitalWrite(ledPin_white, LOW);
}

void controlLEDs(int light) {
  if (light > 600) {
    allOn();
  } else if (light > 500) {
    blueYellowOnly();
  } else if (light > 400) {
    blueOnly();
  } else {
    allOff();
  }
}

void loop() {
  int light = readLightSensor(ldrPin);
  controlLEDs(light);
  controlBuzzer(light)
  delay(100);

}
