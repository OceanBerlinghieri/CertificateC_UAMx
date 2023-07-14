/*#include <stdio.h>

#define YEN 102.892
#define DOLLAR 1.05
#define POUND 0.97

enum{dolar = 1, yen, pound};
int main(){
    double euros, result;
    int option;
    printf("Introduce quantity in euros: ");
    scanf("%lf", &euros);
    printf("Select an option:\n 1. Dollar\n 2. Japanese Yen\n 3. Pound\n");
    scanf("%d", &option);
    
    switch(option){
        case dolar:
            result = euros * DOLLAR;
            printf("%.2lf euros are %.2lf dollars", euros, result);
            break;
        case yen: 
            result = euros * YEN;
            printf("%.2lf euros are %.2lf yens", euros, result);
            break;
        case pound:
            result = euros * POUND;
            printf("%.2lf euros are %.2lf pounds", euros, result);
            break;
    }
    
    return 0;
}*/