/*#include <stdio.h>

int menorMayorDivisor(int num, int *menor, int *mayor) {
    (*menor) = 0;
    (*mayor) = 0;
    if(num < 2) {
        return 0;
    }
    
    for(int i = 2; i < num; i++) {
        if(num % i == 0 && (*menor) == 0) {
           (*menor) = i; 
        }
        
        if(num % i == 0) {
            (*mayor) = i;
        }
    }
    
    
    return 1;
}

int main() {
    int num, menor, mayor;
    
    do{
        printf("Introduce un número: ");
        scanf("%d", &num);
    
        if(num < 2) {
            printf("Error, debes introducir un número mayor o igual a 2\n");
        }
        
    } while (num < 2);
    
    menorMayorDivisor(num, &menor, &mayor);
    
    if(menor == 0 && mayor == 0) {
        printf("El numero %d no tiene divisores menores ni mayores", num);
    } else {
        printf("El menor divisor de %d es %d y su mayor divisor es %d", num, menor, mayor);
    }
    return 0;    
}*/