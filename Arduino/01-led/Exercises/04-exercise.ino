// pins of the LEDs
int ledA = 12;
int builtinLed = LED_BUILTIN;

// this function setups runs once when the program starts
void setup () {
    // set the LED pins as output
	pinMode(ledA, OUTPUT);
	pinMode(builtinLed, OUTPUT);
}


// function that repeats indefinitely when the arduino is powered on
void loop(){
    // turn on the LEDs for 1 second
    digitalWrite(ledA,HIGH);
    digitalWrite(builtinLed,HIGH);
    delay(1000);
  
    // turn off the LEDs for 1 second
    digitalWrite(ledA,LOW);
    digitalWrite(builtinLed,LOW);
    delay(1000);
}