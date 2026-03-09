#include <stdio.h>

#define SIZE 4

struct person {
    char name[50];
    float weight; // kg
    float height; // meters
};

void receiveData(struct person *p, int n);
void printData(const struct person *p, int n);
void calculateBMI(const struct person *p, int n);

int main(void) {
    struct person people[SIZE];
    int option;
    char choice;
    do {
        printf("Welcome to the BMI registry program!\n");
        printf("This program stores data for %d people and can calculate their BMI.\n\n", SIZE);

        do {
            printf("\nMenu:\n"
                   "1 - Receive all data\n"
                   "2 - Print all data\n"
                   "3 - Calculate BMI for all people\n"
                   "4 - Exit\n"
                   "Choose an option: ");
            if (scanf("%d", &option) != 1) break;
            getchar(); // discard pending '\n'
            switch (option) {
                case 1:
                    receiveData(people, SIZE);
                    break;
                case 2:
                    printData(people, SIZE);
                    break;
                case 3:
                    calculateBMI(people, SIZE);
                    break;
                case 4:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid option!\n");
            }
        } while (option != 4);

        printf("You have reached the end of the program!\n");
        do {
            printf("Do you want to restart the program? (y/n): ");
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

    return 0;
}

void receiveData(struct person *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nPerson %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", p[i].name);
        printf("Weight (kg): ");
        scanf("%f", &p[i].weight);
        printf("Height (m): ");
        scanf("%f", &p[i].height);
        getchar(); // discard '\n'
    }
}

void printData(const struct person *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Person %d ---\n", i + 1);
        printf("Name:   %s\n", p[i].name);
        printf("Weight: %.2f kg\n", p[i].weight);
        printf("Height: %.2f m\n", p[i].height);
    }
}

void calculateBMI(const struct person *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- BMI for Person %d ---\n", i + 1);
        printf("Name: %s\n", p[i].name);
        if (p[i].height <= 0.0f) {
            printf("Invalid height (<= 0). Cannot calculate BMI.\n");
            continue;
        }
        float bmi = p[i].weight / (p[i].height * p[i].height);
        printf("BMI: %.2f\n", bmi);
    }
}