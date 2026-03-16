// pins of the LEDs
int ledA = 11;
int ledB = 12;
int builtinLed = LED_BUILTIN;

// this function setups runs once when the program starts
void setup(){
    // set the LEDs pins as output
    pinMode(ledA, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(builtinLed, OUTPUT);
}

// function that repeats indefinitely when the arduino is powered on
void loop(){
    // turn on the LEDs for 2 seconds
    digitalWrite(builtinLed,HIGH);
    digitalWrite(ledA,LOW);
    digitalWrite(ledB,LOW);
    delay(2000);

    // turn on the LEDs for 3 seconds
    digitalWrite(ledA,HIGH);
    digitalWrite(ledB,HIGH);
    digitalWrite(builtinLed,LOW);
    delay(3000);
}