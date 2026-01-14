
int button_yellow_Pin = 10;
int led_yellow_Pin = 11;
int button_blue_Pin = 9;
int led_blue_Pin = 12;
int buzzerPin = 8;

int button_yellow_State = 0;
int button_blue_State = 0;

int read_button(int button_pin){
  int button_state = digitalRead(button_pin);
  return button_state;
 }

void decision(int button_state, int led_pin){
  if (button_state == HIGH) {
    digitalWrite(led_pin, LOW);
  } else {
    digitalWrite(led_pin, HIGH);
  }
}

void buzzer_decision(int button_state) {
  if (button_state == HIGH) {
    digitalWrite(buzzerPin, LOW);
  } else {
    digitalWrite(buzzerPin, HIGH);
  }
}

void setup() {
  pinMode(led_yellow_Pin, OUTPUT);
  pinMode(led_blue_Pin, OUTPUT);
  pinMode(button_yellow_Pin, INPUT);
  pinMode(button_blue_Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  button_yellow_State = read_button(button_yellow_Pin);
  decision(button_yellow_State, led_yellow_Pin);
  buzzer_decision(button_yellow_State);
  
  button_blue_State = read_button(button_blue_Pin);
  decision(button_blue_State, led_blue_Pin);
  buzzer_decision(button_blue_State);
}