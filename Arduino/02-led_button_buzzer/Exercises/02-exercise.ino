int button_yellow_Pin = 10;
int led_yellow_Pin = 11;
int button_blue_Pin = 9;
int led_blue_Pin = 12;
int buzzerPin = 8;

int button_yellow_State = 0;
int button_blue_State = 0;

void setup() {
  pinMode(led_yellow_Pin, OUTPUT);
  pinMode(led_blue_Pin, OUTPUT);
  pinMode(button_yellow_Pin, INPUT);
  pinMode(button_blue_Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  button_yellow_State = digitalRead(button_yellow_Pin);
  Serial.println(button_yellow_State);
  
  button_blue_State = digitalRead(button_blue_Pin);
  Serial.println(button_blue_State);

  if (button_yellow_State == HIGH) {
    digitalWrite(led_yellow_Pin, LOW);
    noTone(buzzerPin);
  } else {
    digitalWrite(led_yellow_Pin, HIGH);
    tone(buzzerPin, 2000);
  }
  
  if (button_blue_State == HIGH) {
    digitalWrite(led_blue_Pin, LOW);
  } else {
    digitalWrite(led_blue_Pin, HIGH);
  }
}
