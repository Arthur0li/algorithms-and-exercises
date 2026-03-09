#include <stdio.h>

void readValue(int *v);
void readOperation(char *op);
void add(int *res, int v);
void subtractVal(int *res, int v);
void multiply(int *res, int v);
void divideVal(int *res, int v);
void showResult(int res);

int main(void) {
    int n, value, result = 0;
    char oper;
    char choice;

    do {
        printf("Welcome to the calculator program!\n");
        printf("This program applies operations to a running result.\n\n");

        printf("How many values? ");
        scanf("%d", &n);
        getchar();

        for (int i = 0; i < n; i++) {
            readValue(&value);
            readOperation(&oper);
            if (oper == '=') {
                showResult(result);
                return 0;
            }
            switch (oper) {
                case '+': add(&result, value);            break;
                case '-': subtractVal(&result, value);   break;
                case '*': multiply(&result, value);      break;
                case '/': divideVal(&result, value);     break;
                default: printf("Invalid operation!\n");
            }
        }
        showResult(result);

        do {
            printf("\nDo you want to restart the program? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
                printf("\nRestarting the program...\n\n");
            } else if (choice == 'n' || choice == 'N') {
                printf("\nExiting the program...\n");
            } else {
                printf("\nInvalid input! Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    return 0;
}

void readValue(int *v) {
    printf("Value: ");
    scanf("%d", v);
}
void readOperation(char *op) {
    printf("Op (+ - * / or =): ");
    scanf(" %c", op);
}
void add(int *r, int v)            { *r += v; }
void subtractVal(int *r, int v)   { *r -= v; }
void multiply(int *r, int v)      { *r *= v; }
void divideVal(int *r, int v) {
    if (v != 0) *r /= v;
    else printf("Div/0 not allowed!\n");
}
void showResult(int res) {
    printf("Result: %d\n", res);
}