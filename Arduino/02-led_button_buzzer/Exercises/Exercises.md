# Português

## Atividades

1. Modifique o programa para que cada botão acenda um dos LEDs sem acionar o buzzer.

2. Modifique o programa para o buzzer apitar quando o LED 1 acender.

3. Modifique o programa para o buzzer apitar quando o LED 2 acender.

4. Modifique o programa para o LED 1 acender e o buzzer apitar quando o botão 2 for pressionado, e o LED 2 acender e o buzzer apitar quando o botão 1 for pressionado.

5. Escreva **2 funções** que façam a leitura do estado de cada um dos botões.

6. Escreva **2 funções** que tomem a decisão de acender ou apagar cada um dos LEDs.

7. Escreva **1 função** que tome a decisão de apitar ou não o buzzer.

8. Copie o programa abaixo e execute a música.
   Em seguida, retire a função `delay(5000);` e modifique o programa para que o **botão 1** inicie a música.

```cpp
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
int buzzerPin = 7;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < N; i++) {
    nota = notas[i][0];
    duracao = notas[i][1];
    tone(buzzerPin, nota, duracao);
    delay(duracao);
  }
  delay(5000);
}
```

---

# English

## Activities

1. Modify the program so that each button turns on one LED without activating the buzzer.

2. Modify the program so the buzzer beeps when LED 1 turns on.

3. Modify the program so the buzzer beeps when LED 2 turns on.

4. Modify the program so LED 1 turns on and the buzzer beeps when button 2 is pressed, and LED 2 turns on and the buzzer beeps when button 1 is pressed.

5. Write **2 functions** that read the state of each button.

6. Write **2 functions** that decide whether to turn each LED on or off.

7. Write **1 function** that decides whether the buzzer should beep or not.

8. Copy the program below and run the music.
   Then remove the `delay(5000);` function and modify the program so that **button 1** starts the music.

```cpp
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
int buzzerPin = 7;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < N; i++) {
    nota = notas[i][0];
    duracao = notas[i][1];
    tone(buzzerPin, nota, duracao);
    delay(duracao);
  }
  delay(5000);
}
```