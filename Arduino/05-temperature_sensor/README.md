# Exercícios de Arduino — Sensor de Temperatura / Temperature Sensor Arduino Exercises

## Português

Nesta pasta estão os exercícios práticos sobre **leitura de temperatura com o sensor TMP36**, indicadores visuais com LEDs e sinal sonoro com buzzer (piezo).
Os exemplos mostram como ler um sinal analógico, converter para tensão e transformar essa tensão em temperatura em graus Celsius (e Fahrenheit), além de exercícios que usam LEDs e buzzer para sinais e alertas.

Os exercícios trabalham com:

* Entrada analógica (`analogRead`) — leitura do sensor TMP36
* Conversão de tensão para temperatura (fórmula do TMP36: `Temp(°C) = (Vout - 0.5) * 100`)
* Saídas digitais (LEDs e piezo)
* Controle de tempo com `delay()`
* Organização do código com funções e `Serial` para depuração

[🔗 **Link do circuito no Tinkercad:**](https://www.tinkercad.com/things/1gNfbFLAunz-temperature-sensor-list-of-exercises)

### Lista de componentes

| Nome                | Quantidade | Componente                    |
| :------------------ | :--------: | :---------------------------- |
| Arduino Uno R3 (U1) |      1     | Arduino Uno R3                |
| U2                  |      1     | Sensor de temperatura [TMP36] |
| R1–R3               |      3     | Resistor 330 Ω                |
| D1                  |      1     | LED Amarelo                   |
| D2                  |      1     | LED Laranja                   |
| D3                  |      1     | LED Vermelho                  |
| PIEZO1              |      1     | Piezo (Buzzer)                |

---

### Como funciona (resumo técnico)

1. O TMP36 fornece uma tensão de saída proporcional à temperatura: tem uma tensão de offset de **0,5 V** em 0 °C e varia **10 mV/°C**.
2. Leitura: fazemos `analogRead(A0)` para obter um valor entre 0 e 1023 (para referência de 5 V).
3. Conversão para tensão: `voltage = analogValue * (5.0 / 1023.0);`
4. Conversão para Celsius: `tempC = (voltage - 0.5) * 100.0;`
5. (Opcional) Converter para Fahrenheit: `tempF = tempC * 9.0 / 5.0 + 32.0;`

---
## English

This folder contains practical exercises about **reading temperature with the TMP36 sensor**, visual indicators with LEDs and a piezo buzzer.
Examples show how to read an analog signal, convert it to voltage and then to temperature in Celsius (and Fahrenheit), plus exercises that use LEDs and buzzer for alerts.

Exercises cover:

* Analog input (`analogRead`) — reading the TMP36 sensor
* Converting voltage to temperature (TMP36 formula: `Temp(°C) = (Vout - 0.5) * 100`)
* Digital outputs (LEDs and piezo)
* Time control with `delay()`
* Code organization with functions and `Serial` for debugging

[🔗 **Tinkercad circuit link:**](https://www.tinkercad.com/things/1gNfbFLAunz-temperature-sensor-list-of-exercises)

### Components list

| Name                | Quantity | Component                  |
| :------------------ | :------: | :------------------------- |
| Arduino Uno R3 (U1) |     1    | Arduino Uno R3             |
| U2                  |     1    | Temperature sensor [TMP36] |
| R1–R3               |     3    | 330 Ω Resistor             |
| D1                  |     1    | Yellow LED                 |
| D2                  |     1    | Orange LED                 |
| D3                  |     1    | Red LED                    |
| PIEZO1              |     1    | Piezo (Buzzer)             |

---
