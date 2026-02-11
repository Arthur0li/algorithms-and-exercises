int lm35Pin = A0;
float temperature;
int ledPin = 3;
int buzzer = 6;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  temperature = (float(((((analogRead(lm35Pin) * 5.0) / 1023) * 1000) - 500) / 10));
  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature >= 27) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(3000);
}
