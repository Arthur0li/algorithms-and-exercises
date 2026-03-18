// set the pin for the LM35 temperature sensor, the variable to store the temperature value, the pin for the LED and the pin for the buzzer
int lm35Pin = A0;
float temperature;
int ledPin = 3;
int buzzer = 6;

// function that runs once when you press reset or power the board
void setup() {
  // set the LED and buzzer pins as output and start the serial communication for debugging
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // read the value from the LM35 sensor, convert it to a temperature in Celsius and print it to the serial monitor for debugging
  temperature = (float(((((analogRead(lm35Pin) * 5.0) / 1023) * 1000) - 500) / 10));
  Serial.print("Temperature: ");
  Serial.println(temperature);

  // if the temperature is above or equal to 27 degrees Celsius, turn on the LED and the buzzer, otherwise turn them off
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
