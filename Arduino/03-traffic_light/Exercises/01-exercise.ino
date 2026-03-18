// pins of the LEDs
int red1 = 1;  
int yellow1 = 2;
int green1 = 3; 
int red2 = 11;  
int yellow2 = 12;
int green2= 13;  

// function that runs once when you press reset or power the board
void setup() {
  // set the LEDs pins as output
    pinMode(red1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green2, OUTPUT);
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // turn on the green LEDs for 1 second, then turn on the yellow LEDs for 1 second, then turn on the red LEDs for 1 second, then turn off all the LEDs for 1 second and repeat this cycle indefinitely
    digitalWrite(green1,HIGH);
    digitalWrite(green2,HIGH); 
    digitalWrite(yellow1,LOW);
    digitalWrite(yellow2,LOW);
  	digitalWrite(red1,LOW);
  	digitalWrite(red2,LOW);

    delay(1000); 
    
    // turn on the yellow LEDs for 1 second, then turn on the red LEDs for 1 second, then turn off all the LEDs for 1 second and repeat this cycle indefinitely
    digitalWrite(green1,LOW);
    digitalWrite(green2,LOW);
 	  digitalWrite(yellow1,HIGH);
  	digitalWrite(yellow2,HIGH);
    digitalWrite(red1,LOW);
  	digitalWrite(red2,LOW);
    
    delay(1000);
  
    // turn on the red LEDs for 1 second, then turn off all the LEDs for 1 second and repeat this cycle indefinitely    
    digitalWrite(green1,LOW);
    digitalWrite(green2,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(yellow2,LOW);
 	  digitalWrite(red1,HIGH);
  	digitalWrite(red2,HIGH);
  
  	delay(1000);
  	
    // turn off all the LEDs for 1 second and repeat this cycle indefinitely
    digitalWrite(green1,LOW);
    digitalWrite(green2,LOW);
    digitalWrite(yellow1,LOW);
    digitalWrite(yellow2,LOW);
  	digitalWrite(red1,LOW);
  	digitalWrite(red2,LOW);
 }