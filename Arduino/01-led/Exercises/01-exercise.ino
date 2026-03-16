// pins of the LEDs
int ledA = 11;
int ledB = 12;
int builtinLed = LED_BUILTIN;

// this function setups runs once when the program starts
void setup() {
  // set the LED pins as output
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(builtinLed, OUTPUT);
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(builtinLed, HIGH);
  delay(700);

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(builtinLed, LOW);
  delay(4000);
}