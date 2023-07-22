/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGS 2

void appears(char **strings) {
    for(int i = 0; i < strlen(strings[0]) - 1; i++) {
        int boolean = 0;
        for (int j = 0; j < strlen(strings[1]) - 1; j++) {
            if(strings[0][i] == strings[1][j]) {
                boolean = 1;
                break;
            }
        }
        if(boolean == 1) {
            printf("Character %c appears in %s", strings[0][i], strings[1]);
        } else {
            printf("Character %c does not appears in %s", strings[0][i], strings[1]);
        }
    }
}

int main() {
    int size;
    char **strings;
    
    strings = (char**)malloc(STRINGS * sizeof(char));
    if(strings == NULL){
        printf("Error alocating number of strings");
        return 1;
    }
    
    printf("Introduce max size of strings: ");
    scanf("%d", &size);
    
    for(int i = 0; i < STRINGS; i++) {
        strings[i] = (char*)malloc(size*sizeof(char));
        
        if(strings[i] == NULL) {
            for(int j = 0; j < i; j++) {
                free(strings[j]);
            }
            free(strings);
            printf("Error allocating characters of strings");
            return 1;
        }
    }
    getchar();
    printf("Introduce first string: ");
    fgets(strings[0], size, stdin);
    printf("Introduce second string: ");
    fgets(strings[1], size, stdin);
    
    
    
    appears(strings);
    
    for(int i = 0; i < STRINGS; i++) {
            free(strings[i]);
        }
        free(strings);
            
    return 0;
}*/