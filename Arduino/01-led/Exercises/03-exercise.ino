int ledA = 11;
int ledB = 12;
int builtinLed = LED_BUILTIN;

void setup(){
    pinMode(ledA, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(builtinLed, OUTPUT);
}

void loop(){
    digitalWrite(ledA,HIGH);
    digitalWrite(ledB,HIGH);
    digitalWrite(builtinLed,HIGH);
    delay(2000);

    digitalWrite(ledA,LOW);
    digitalWrite(ledB,LOW);
    digitalWrite(builtinLed,LOW);
    delay(4000);
  
    digitalWrite(ledA,HIGH);
    digitalWrite(ledB,HIGH);
    digitalWrite(builtinLed,HIGH);
    delay(3000);

    digitalWrite(ledA,LOW);
    digitalWrite(ledB,LOW);
    digitalWrite(builtinLed,LOW);
    delay(5000);
}