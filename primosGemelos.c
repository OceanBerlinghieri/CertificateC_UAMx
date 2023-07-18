/*#include <stdio.h>
#include <math.h>

int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Introduce un número entero superior a 3: ");
    scanf("%d", &num);
    
    if(esPrimo(num)) {
        if (esPrimo(num) && esPrimo(num+2) && esPrimo(num-2)){ 
            printf("El numero %d es primo y %d y %d son primos gemelos", num, num-2, num+2);
        }else if (esPrimo(num) && esPrimo(num+2)) {
            printf("El numero %d es primo y el %d es primero gemelo", num, num+2);
        } else if (esPrimo(num) && esPrimo(num-2)){
             printf("El numero %d es primo y el %d es primero gemelo", num, num-2);
        } else {
            printf("El numero %d es primo sin primo gemelo", num);
        } 
    } else {
        printf("El numero %d no es primo", num);
    }
    
    return 0;
}*/