int ledPin = 2;
int ldrPin = A0;
int ldrValor = 0;
int buzzer = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValor = analogRead(ldrPin);
  Serial.println(ldrValor);

  if (ldrValor > 500){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin, HIGH);}
  else {
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin, LOW);}

  delay(100);
}
