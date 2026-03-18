// set the pin numbers for the LEDs and the potentiometer
int ledPin1 = 3;
int ledPin2 = 6;
int ledPin3 = 9;
int pwmPin  = A0;

// variable to store the value read from the potentiometer
unsigned int readValue;
int level;

// function that runs once when you press reset or power the board
void setup() {
  // set the LED pins as output and start the serial communication for debugging
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // read the value from the potentiometer, print it to the serial monitor for debugging, map it to a value between 1 and 3 and write it to the LEDs
  readValue = analogRead(pwmPin);
  Serial.print(readValue);

  level = map(readValue, 0, 1023, 1, 3);
  Serial.print("  | Level: ");
  Serial.println(level);
  
  digitalWrite(ledPin1, level >= 1 ? HIGH : LOW);
  digitalWrite(ledPin2, level >= 2 ? HIGH : LOW);
  digitalWrite(ledPin3, level >= 3 ? HIGH : LOW);

  delay(100);
}
