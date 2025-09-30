#include <stdio.h>

int main(void) {
    char character; 
    char one_word [100];
    char sentence [100];
    
    printf("welcome to the code!\n");
    printf("Type a character: ");
    scanf("%c", &character );
    getchar();

    printf("Now type a string: ");
    scanf("%s", one_word);
    getchar(); 

    printf("Now type a sentence: ");
    scanf("%[^\n]%*c", sentence);
    
    printf("\nHere the character you type: ");
    printf("%c", character); 
    printf("\nHere the character you type: ");
    printf("%s", one_word);
    printf("\nHere the sentence you type: ");
    printf("%s\n", sentence);

    return 0;
}