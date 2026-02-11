int ledPin = 3;
int ledPin2 = 6;
int ledPin3 = 9;
int pwmPin = A0;

unsigned int readValue;
unsigned int pwmValue;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(pwmPin);
  Serial.println(readValue);
  pwmValue = map(readValue, 0, 1023, 0, 255);
  analogWrite(ledPin, pwmValue);
  analogWrite(ledPin2, pwmValue);
}
