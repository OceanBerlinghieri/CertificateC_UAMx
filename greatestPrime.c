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

int primoMayor(int num) {
    int greatest = 0;
    
    for(int i = 0; i <= num; i++) {
        if(esPrimo(i) && i > greatest) {
            greatest = i;
        }
    }
    return greatest;
}

int main(){
    int num;
    
    do{
    printf("Introuduce a number greater than 1: ");
    scanf("%d", &num);
    } while(num <= 1);
    
    printf("The greatest prime number from 1 to %d is %d", num, primoMayor(num));
    
    
    return 0;
}*/