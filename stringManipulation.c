/*#include <stdio.h>
#include <string.h>

#define MAX 256

int main(){
    char string[MAX], reverse[MAX], lowercase, uppercase;
    int i = 0, j = 0;
    
    printf("Introduce a string: ");
    gets(string);
    
    printf("Introduce a lowercase character: ");
    do {
        lowercase = getchar();
        if(lowercase < 'a'|| lowercase > 'z'){
            printf("Incorrect character. Try again: ");
            getchar();
        }
    } while(lowercase < 'a'|| lowercase > 'z');
    
    printf("Introduce an uppercase character: ");
    do {
        //Clean buffer
        getchar();
        uppercase = getchar();
        if(uppercase < 'A' || uppercase > 'Z'){
            printf("Incorrect character. Try again: ");
        }
    } while(uppercase < 'A' || uppercase > 'Z');
    
    while(i < strlen(string)) {
        if(string[i] == lowercase) {
            string[i] = uppercase;
        }
        i++;
    }
    printf("%s\n", string);
    i=(strlen(string)-1);
    
    while(i >= 0) {
        reverse[j] = string[i];
        j++;
        i--;
    }
    printf("%s", reverse);
    return 0;
}*/