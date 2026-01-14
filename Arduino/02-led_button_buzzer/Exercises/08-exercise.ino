#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29

int notas[][2] = {
  {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {DO*2, D},
  {SI, D*3}, {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D},
  {RE*2, D}, {DO*2, D}, {DO*2, D}, {0, D},
  {MI*2, D/2}, {MI*2, D/2}, {SOL*2, D*2}, {MI*2, D},
  {DO*2, D}, {SI, D}, {LA, D}, {0, D},
  {FA*2, D/2}, {FA*2, D/2}, {MI*2, D*2}, {DO*2, D},
  {RE*2, D}, {DO*2, D}, {DO*2, D*3}
};

int duracao;
int nota;
int buzzerPin = 8;
int button_yellow_Pin = 10;
int led_yellow_Pin = 11;
int button_blue_Pin = 9;
int led_blue_Pin = 12;
int button_yellow_State = 0;
int button_blue_State = 0;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(led_yellow_Pin, OUTPUT);
  pinMode(led_blue_Pin, OUTPUT);
  pinMode(button_yellow_Pin, INPUT);
  pinMode(button_blue_Pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  button_yellow_State = digitalRead(button_yellow_Pin);
  Serial.println(button_yellow_State);
  
  button_blue_State = digitalRead(button_blue_Pin);
  Serial.println(button_blue_State);
  
    if (button_yellow_State == HIGH) {
    digitalWrite(led_yellow_Pin, LOW);
  } else {
    digitalWrite(led_yellow_Pin, HIGH);
  }
  
  
  if (button_blue_State == HIGH) {
    digitalWrite(led_blue_Pin, LOW);
  } else {
    digitalWrite(led_blue_Pin, HIGH);
  }
  
  if (button_yellow_State == LOW || button_blue_State == LOW) {
    for (int i = 0; i < N; i++) {
    nota = notas[i][0];
    duracao = notas[i][1];
    tone(buzzerPin, nota, duracao);
    delay(duracao);
  }
} else {
  noTone(buzzerPin);
}
}