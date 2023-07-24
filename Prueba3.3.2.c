/*#include <stdio.h>
#include <string.h>

#define MAX 128
#define VOCALES 5
void numeroDeVocales(int *vocales, char *palabra) {
    int i = 0;
    for(i = 0; palabra[i] != 0; i++){
        switch (palabra[i]) {
            case 'A':
            case 'a':
                vocales[0]++;
                break;
            case 'E':
            case 'e':
                vocales[1]++;
                break;
            case 'I':
            case 'i':
                vocales[2]++;
                break;
            case 'O':
            case 'o':
                vocales[3]++;
                break;
            case 'U':
            case 'u':
                vocales[4]++;
                break;
        }
    }
}

int main() {
    int vocales[VOCALES] = {0,0,0,0,0};
    char palabra[MAX];
    
    printf("Introduce una palabra: ");
    fgets(palabra, MAX, stdin);
    
    numeroDeVocales(vocales, palabra);
    
    printf("La palabra %s tiene: \nA o a: %d\nE o e: %d\nI o i: %d\nO o o: %d\nU o u: %d\n", palabra, vocales[0], vocales[1], vocales[2], vocales[3], vocales[4]);
    
    return 0;
}*/