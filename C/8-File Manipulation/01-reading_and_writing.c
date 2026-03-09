#include <stdio.h>

int main(void) {
    char ch;
    char choice;

    do {
        printf("Welcome to the character file writer!\n");
        printf("This program will create a file, store characters you enter (one by one),\n");
        printf("and then read and print them back. Enter the character '0' to finish input.\n\n");

        FILE *fp = fopen("chars.txt", "w");
        if (fp == NULL) {
            perror("Error creating file");
            return 1;
        }

        printf("Enter characters (one at a time). Enter '0' to stop:\n");
        while (1) {
            if (scanf(" %c", &ch) != 1) break; // reads next non-whitespace character
            if (ch == '0') break;
            fputc((unsigned char)ch, fp);
        }
        fclose(fp);

        /* reopen for reading and print contents */
        fp = fopen("chars.txt", "r");
        if (fp == NULL) {
            perror("Error opening file for reading");
            return 1;
        }

        printf("\nCharacters stored in file:\n");
        int c;
        while ((c = fgetc(fp)) != EOF) {
            putchar(c);
        }
        putchar('\n');
        fclose(fp);

        /* ask whether to restart */
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