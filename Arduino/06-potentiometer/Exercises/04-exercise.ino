int ledPin1 = 3;
int ledPin2 = 6;
int ledPin3 = 9;
int buzzerPin = 5;
int pwmPin  = A0;

unsigned int readValue;
int level;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(pwmPin);
  Serial.print(readValue);

  level = map(readValue, 0, 1023, 0, 3);
  Serial.println(level);

  digitalWrite(ledPin1, level >= 1 ? HIGH : LOW);
  digitalWrite(ledPin2, level >= 2 ? HIGH : LOW);
  digitalWrite(ledPin3, level >= 3 ? HIGH : LOW);
  digitalWrite(buzzerPin, level == 3 ? HIGH : LOW);

  delay(100);
}
