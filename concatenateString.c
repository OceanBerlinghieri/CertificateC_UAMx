#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRINGS 2

void concatenate(char **strings, char *concat){
    strcat(concat, strings[0]);
    concat[strlen(strings[0]) - 1] = '\0';
    strcat(concat, strings[1]);
    concat[strlen(strings[0]) + strlen(strings[1]) - 2] = '\0';

}

int main() {
    int size;
    char **strings, *concat;
    
    if((concat = (char*)malloc(size*2*sizeof(char))) == NULL){
        printf("Error allocating concat");
        return 1;
    }
    
    if((strings = (char**)malloc(STRINGS*sizeof(char))) == NULL) {
        printf("Error allocating strings");
        return 1;
    } 
    
   
    printf("Max size of strings?: ");
    scanf("%d", &size);
    getchar();
    
     for(int i = 0; i < STRINGS; i++) {
        strings[i] = (char*)malloc(size*sizeof(char));
        if(strings[i] == NULL) {
            for(int j = 0; j < i; j++){
                free(strings[j]);
            }
            free(strings);
            printf("Error allocating characters of strings");
            return 1;
        }
    }
    
    printf("Enter a string: ");
    fgets(strings[0], size, stdin);
    printf("Enter a second string: ");
    fgets(strings[1], size, stdin);
    
    concatenate(strings, concat);
    printf("Concatenated string: %s\nLength: %d", concat, strlen(concat));
    
    return 0;
}