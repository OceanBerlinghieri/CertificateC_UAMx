/*#include <stdio.h>

#define MAX 64
int main(){
    int number, i = 0, quotient, binary[MAX];
    
    printf("Introduce a positive number: ");
    do {
      scanf("%d", &number);
      if(number <= 0) {
          printf("Number must be positive. Try again: ");
      }
    } while (number <= 0);
    quotient = number;
    
    while(quotient != 1) {
        binary[i] = quotient % 2;
        quotient /= 2;
        i++;
    }
    binary[i] = 1;
    for(;i >= 0; i--) {
        printf("%d", binary[i]);
    }
    
    return 0;
}*/