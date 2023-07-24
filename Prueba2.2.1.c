/*#include <stdio.h>
#include <string.h>

#define SIZE 256
int main() {
    char string1[SIZE], string2[SIZE], concat[SIZE];
    int i = 0, j;
    
    printf("Introduce first word: ");
    gets(string1);
    printf("Introduce second word: ");
    gets(string2);
    
    do {
        concat[i] = string1[i];
        i++;
    } while(string1[i] != 0);
    
    j = strlen(string2) - 1;
    
    do{
        concat [i] = string2[j];
        j--;
        i++;
    } while (j >= 0);
    
    printf("Result of concatenate %s and %s is: %s", string1, string2, concat);
    return 0;
}*/