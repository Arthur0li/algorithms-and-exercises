// set the pin for the LM35 temperature sensor, the variable to store the temperature value, the pins for the LEDs and the pin for the buzzer
int lm35Pin = A0;
float temperature;
int ledPin = 3;
int ledPin2 = 4;
int ledPin3 = 5;
int buzzer = 6;

// function that runs once when you press reset or power the board
void setup() {
  // set the LED and buzzer pins as output and start the serial communication for debugging
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

// function that reads the value from the LM35 sensor, converts it to a temperature in Celsius and prints it to the serial monitor for debugging
float readTemperatureSensor() {

  float lm35;

  lm35 = (((analogRead(lm35Pin) * 5.0) / 1023) * 1000 - 500) / 10;

  Serial.println(lm35);

  return lm35;
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // read the value from the LM35 sensor, convert it to a temperature in Celsius and print it to the serial monitor for debugging
  float temperature = readTemperatureSensor();

  // if the temperature is above 70 degrees Celsius, turn on all the LEDs and the buzzer, if it's above 50 degrees Celsius, turn on two LEDs, if it's above 30 degrees Celsius, turn on one LED and if it's below or equal to 30 degrees Celsius, turn off all the LEDs and the buzzer
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