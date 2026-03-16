// pins of the buttons, LEDs and buzzer
int button_yellow_Pin = 10;
int led_yellow_Pin = 11;
int button_blue_Pin = 9;
int led_blue_Pin = 12;
int buzzerPin = 8;

int button_yellow_State = 0;
int button_blue_State = 0;

// function to read the state of a button
int read_button(int button_pin){
  int button_state = digitalRead(button_pin);
  return button_state;
 }

// function that takes the state of a button and the pin of an LED and turns on the LED if the button is pressed, otherwise turns it off
void decision(int button_state, int led_pin){
  if (button_state == HIGH) {
    digitalWrite(led_pin, LOW);
  } else {
    digitalWrite(led_pin, HIGH);
  }
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
  // read the state of the buttons and turn on the corresponding LED if the button is pressed, otherwise turn it off
  button_yellow_State = read_button(button_yellow_Pin);
  decision(button_yellow_State, led_yellow_Pin);
  
  button_blue_State = read_button(button_blue_Pin);
  decision(button_blue_State, led_blue_Pin);

}