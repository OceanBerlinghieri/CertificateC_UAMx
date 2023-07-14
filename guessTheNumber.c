/*#include <stdio.h>

int main() {
    int number, guess;
    
    printf("Number: ");
    scanf("%d", &number);
    printf("\n\n\n\n\n\n\n\n\n\n");
    
    printf("Guess the number between 0 and 9\n");
    scanf("%d", &guess);
    while(guess != number) {
        printf("Incorrect number, try again!: ");
        scanf("%d", &guess);
    }
    
    printf("Correct!");
    
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int number, guess;
    
    printf("Number: ");
    scanf("%d", &number);
    printf("\n\n\n\n\n\n\n\n\n\n");
    
    printf("Guess the number between 0 and 99\n");
    scanf("%d", &guess);
    while(guess != number) {
        printf("Incorrect number, try again!: ");
        if(number < guess) {
            printf("The number is smaller\n");
        } else {
            printf("The number is bigger\n");
        }
        scanf("%d", &guess);
    }
    
    printf("Correct!");
    
    return 0;
}*/