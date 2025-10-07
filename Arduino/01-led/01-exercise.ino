int ledA = 13;
int ledB = 12;
int builtinLed = LED_BUILTIN;

void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(builtinLed, OUTPUT);
}

void loop() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(builtinLed, HIGH);
  delay(1000);

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(builtinLed, LOW);
  delay(4000);
}
