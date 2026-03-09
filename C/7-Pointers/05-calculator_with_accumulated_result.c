#include <stdio.h>

void lerValor(int *v);
void lerOperacao(char *op);
void somar(int *res, int v);
void subtrair(int *res, int v);
void multiplicar(int *res, int v);
void dividir(int *res, int v);
void mostrarResultado(int res);

int main(void) {
    int n, valor, resultado = 0;
    char oper;

    printf("Quantos valores? ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        lerValor(&valor);
        lerOperacao(&oper);
        if (oper == '=') {
            mostrarResultado(resultado);
            return 0;
        }
        switch (oper) {
            case '+': somar(&resultado, valor);    break;
            case '-': subtrair(&resultado, valor); break;
            case '*': multiplicar(&resultado, valor); break;
            case '/': dividir(&resultado, valor);  break;
            default: printf("Op inválida!\n");
        }
    }
    mostrarResultado(resultado);
    return 0;
}

void lerValor(int *v) {
    printf("Valor: ");
    scanf("%d", v);
}
void lerOperacao(char *op) {
    printf("Op (+ - * / ou =): ");
    scanf(" %c", op);
}
void somar(int *r, int v)      { *r += v; }
void subtrair(int *r, int v)   { *r -= v; }
void multiplicar(int *r, int v){ *r *= v; }
void dividir(int *r, int v) {
    if (v!=0) *r /= v;
    else printf("Div/0 não permitida!\n");
}
void mostrarResultado(int res) {
    printf("Resultado: %d\n", res);
}