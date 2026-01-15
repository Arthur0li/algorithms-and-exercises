int red1 = 1;  
int yellow1 = 2;
int green1 = 3; 
int red2 = 11;  
int yellow2 = 12;
int green2= 13;  

void setup() {
    pinMode(red1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green2, OUTPUT);
}

void loop() {
    digitalWrite(red1,HIGH);
    digitalWrite(yellow1,HIGH);
    digitalWrite(green1,HIGH);
    digitalWrite(red2,HIGH); 
    digitalWrite(yellow2,HIGH);
    digitalWrite(green2,HIGH); 
    
    delay(1000); 
    
    digitalWrite(red1,LOW); 
    digitalWrite(yellow1,LOW);
    digitalWrite(green1,LOW);
    digitalWrite(red2,LOW); 
    digitalWrite(yellow2,LOW);
    digitalWrite(green2,LOW); 
    
    delay(1000);
 }