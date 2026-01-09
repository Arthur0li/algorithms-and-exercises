int ledA = 12;
int builtinLed = LED_BUILTIN;

void setup () {
	pinMode(ledA, HIGH);
	pinMode(builtinLed, HIGH);
}

void loop(){
    digitalWrite(ledA,HIGH);
    digitalWrite(builtinLed,HIGH);
    delay(1000);
  
    digitalWrite(ledA,LOW);
    digitalWrite(builtinLed,LOW);
    delay(1000);
}