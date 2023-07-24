/*#include <stdio.h>

int diferencia(char c1, char c2) {
    if(c1 < 65 || c1 > 122 || c2 < 65 || c2 > 122) {
        return -1;
    } else {
        if(c1 < 97) {
            c1+=32;
        } else if(c2 < 97) {
            c2+=32;
        }
    }
    
    if(c1 > c2){
        return c1-c2;
    }
    
    return c2-c1;
}

int main() {
    char c1, c2;
    int res;
    
    do {
        printf("Introduce una letra del abecedario excepto ñ: ");
        c1 = getchar();
        getchar();
        printf("Introduce otra letra del abecedario excepto ñ: ");
        c2 = getchar();
        
        if(c1 < 65 || c1 > 122 || c2 < 65 || c2 > 122) {
            printf("Error solo letras del abecedario");
        }
    } while (c1 < 65 || c1 > 122 || c2 < 65 || c2 > 122);
    
    res = diferencia(c1,c2);
    
    if(res == 1) {
        printf("La diferencia entre %c y %c es de un caracter");
    } else {
        printf("La diferencia entre %c y %c es de %d caracteres", c1,c2, res);
    }
    
    return 0;
}*/