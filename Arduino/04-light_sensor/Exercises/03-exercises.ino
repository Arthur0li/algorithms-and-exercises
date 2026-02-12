int ledPin_blue = 2;
int ledPin_yellow = 3;
int ledPin_white = 4;
int buzzer = 5;
int ldrPin = A0;

void setup() {
  pinMode(ledPin_blue, OUTPUT);
  pinMode(ledPin_yellow, OUTPUT);
  pinMode(ledPin_white, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

int readLightSensor(int ldrpin){
  	int ldrValor = 0;
    ldrValor = analogRead(ldrpin);
    Serial.println(ldrValor);
  	return ldrValor;
}

void loop() {

  if (readLightSensor(ldrPin) > 600){
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledPin_blue, HIGH);
    digitalWrite(ledPin_yellow, HIGH);
    digitalWrite(ledPin_white, HIGH);}
  else if (readLightSensor(ldrPin) > 500){
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin_blue, HIGH);
    digitalWrite(ledPin_yellow, HIGH);
	digitalWrite(ledPin_white, LOW);}
  else if (readLightSensor(ldrPin) > 400){    
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin_blue, HIGH);
    digitalWrite(ledPin_yellow, LOW);
	digitalWrite(ledPin_white, LOW);
  }
  else{
    digitalWrite(buzzer, LOW);
    digitalWrite(ledPin_blue, LOW);
    digitalWrite(ledPin_yellow, LOW);
  	digitalWrite(ledPin_white, LOW);      
  }

  delay(100);
}