// set the pin numbers for the LEDs and the potentiometer
int ledPin = 3;
int ledPin2 = 6;
int ledPin3 = 9;
int pwmPin = A0;

// variables to store the value read from the potentiometer and the value to be written to the LEDs
unsigned int readValue;
unsigned int pwmValue;
unsigned int pwmValue2;

// function that runs once when you press reset or power the board
void setup() {
  // set the LED pins as output and start the serial communication for debugging
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // read the value from the potentiometer, print it to the serial monitor for debugging, map it to a value between 0 and 255 and write it to the LEDs
  readValue = analogRead(pwmPin);
  Serial.println(readValue);
  pwmValue = map(readValue, 0, 1023, 0, 255);
  pwmValue2 = 255 - pwmValue;
  analogWrite(ledPin, pwmValue);
  analogWrite(ledPin2, pwmValue2);
}
