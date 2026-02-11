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

void loop() {
  temperature = (float(((((analogRead(lm35Pin) * 5.0) / 1023) * 1000) - 500) / 10));
  Serial.print("Temperature: ");
  Serial.println(temperature);

  if (temperature > 70) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else if (temperature > 50) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(buzzer, LOW);
  }
  else if (temperature > 30) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(buzzer, LOW);
  }
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(3000);
}
