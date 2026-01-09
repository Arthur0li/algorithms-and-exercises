int ledA = 11;
int ledB = 12;
int builtinLed = LED_BUILTIN;

void setup(){
    pinMode(ledA, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(builtinLed, OUTPUT);
}

void loop(){
    digitalWrite(builtinLed,HIGH);
    digitalWrite(ledA,LOW);
    digitalWrite(ledB,LOW);
    delay(2000);

    digitalWrite(ledA,HIGH);
    digitalWrite(ledB,HIGH);
    digitalWrite(builtinLed,LOW);
    delay(3000);
}