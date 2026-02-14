# Exercícios de Arduino — Potenciômetro / Potentiometer Arduino Exercises

## Português

Nesta pasta estão os exercícios práticos sobre **uso de potenciômetro** como entrada analógica para controlar LEDs e buzzer. Os exemplos mostram como ler a posição do potenciômetro (tensão variável), converter para valor digital com `analogRead`, mapear escalas e usar `analogWrite` (PWM) para controlar brilho e comportamentos progressivos (por exemplo: LEDs acendendo em níveis, LEDs invertidos, buzzer no nível máximo).

Os exercícios trabalham com:

* Entrada analógica (`analogRead`) — leitura do potenciômetro
* Divisor de tensão (potenciômetro entre 5V e GND; pino do meio para A0)
* Mapeamento de valores com `map()` e uso de PWM (`analogWrite()`)
* Saídas digitais e PWM (LEDs e piezo)
* Organização do código com funções e `Serial` para depuração

[🔗 **Link do circuito no Tinkercad:**](https://www.tinkercad.com/things/loqRVOmwq8y-potentiometer-list-of-exercises)

### Lista de componentes

|            Nome           | Quantidade | Componente          |
| :-----------------------: | :--------: | :------------------ |
|    Arduino Uno R3 (U1)    |      1     | Arduino Uno R3      |
|  Potenciômetro (10k) (U2) |      1     | Potenciômetro 10 kΩ |
|           R1–R3           |      3     | Resistor 330 Ω      |
|             D1            |      1     | LED Amarelo         |
|             D2            |      1     | LED Laranja         |
|             D3            |      1     | LED Vermelho        |
|           PIEZO1          |      1     | Piezo (Buzzer)      |
| Jumper wires / Breadboard |      —     | Conexões e montagem |

---

## English

This folder contains practical exercises about **using a potentiometer** as an analog input to control LEDs and a buzzer. Examples show how to read the potentiometer position (variable voltage), convert it to digital with `analogRead`, map ranges and use `analogWrite` (PWM) to control brightness and progressive behaviors (e.g., LEDs lighting by steps, inverted LEDs, buzzer on maximum level).

Exercises cover:

* Analog input (`analogRead`) — reading the potentiometer
* Voltage divider (potentiometer between 5V and GND; middle pin to A0)
* Value mapping with `map()` and PWM (`analogWrite()`)
* Digital and PWM outputs (LEDs and piezo)
* Code organization with functions and `Serial` for debugging

[🔗 **Tinkercad circuit link:**](https://www.tinkercad.com/things/loqRVOmwq8y-potentiometer-list-of-exercises)

### Components list

|            Name           | Quantity |      Component      |
| :-----------------------: | :------: | :-----------------: |
|    Arduino Uno R3 (U1)    |     1    |    Arduino Uno R3   |
|   Potentiometer 10k (U2)  |     1    | Potentiometer 10 kΩ |
|           R1–R3           |     3    |    330 Ω Resistor   |
|             D1            |     1    |      Yellow LED     |
|             D2            |     1    |      Orange LED     |
|             D3            |     1    |       Red LED       |
|           PIEZO1          |     1    |    Piezo (Buzzer)   |
| Jumper wires / Breadboard |     —    | Wiring and assembly |

---
