// pins of the buttons, LEDs and buzzer
int button_yellow_Pin = 10;
int led_yellow_Pin = 11;
int button_blue_Pin = 9;
int led_blue_Pin = 12;
int buzzerPin = 8;

int button_yellow_State = 0;
int button_blue_State = 0;

// function to read the state of a button
int read_button(int pin){
  int button_state = digitalRead(pin);
  return button_state;
 }

// the setup function runs once when you press reset or power the board
void setup() {
  // set the buttons pins as input and the LEDs and buzzer pins as output
  pinMode(led_yellow_Pin, OUTPUT);
  pinMode(led_blue_Pin, OUTPUT);
  pinMode(button_yellow_Pin, INPUT);
  pinMode(button_blue_Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  // initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}

// function that repeats indefinitely when the arduino is powered on
void loop() {
  // read the state of the buttons and print it to the serial monitor
  button_yellow_State = read_button(button_yellow_Pin);

  if (button_yellow_State == HIGH) {
    digitalWrite(led_yellow_Pin, LOW);
  } else {
    digitalWrite(led_yellow_Pin, HIGH);
  }
  
  // if the blue button is pressed, turn on the yellow LED, otherwise turn it off
  button_blue_State = read_button(button_blue_Pin);
  
  if (button_blue_State == HIGH) {
  	digitalWrite(led_blue_Pin, LOW);
  } else {
    digitalWrite(led_blue_Pin, HIGH);
  }
}