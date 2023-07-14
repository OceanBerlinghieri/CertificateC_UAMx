/*#include <stdio.h>

#define YEN 102.892
#define DOLLAR 1.05
#define POUND 0.97

int main(){
    double euros, result;
    char c;
    
    printf("Introduce quantity in euros: ");
    scanf("%lf", &euros);
    getchar(); //getchar para limpiar el buffer almacenado por scanf
    
    printf("Select an option:\n(D)ollar\n(J)apanese Yen\n(P)ound\n");
    scanf("%c", &c);
    
    switch (c){
        case 'D':
        case 'd':
            result = euros * DOLLAR;
            printf("%.2lf euros are %.2lf dollars", euros, result);
            break;
        case 'j':
        case 'J': 
            result = euros * YEN;
            printf("%.2lf euros are %.2lf yens", euros, result);
            break;
        case 'P':
        case 'p':
            result = euros * POUND;
            printf("%.2lf euros are %.2lf pounds", euros, result);
            break;
        default: 
            printf("Incorrect character");
    }
    
    return 0;
}*/