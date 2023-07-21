/*#include <stdio.h>

void estadistica(int x, int y, double *pMedia, double *pVar) {
    (*pMedia) = (double)(x+y)/2;
    (*pVar) = ((x-(*pMedia))*(x-(*pMedia)) + (y-(*pMedia))*(y-(*pMedia)))/2;
}

int main() {
    double media, var;
    int x, y;
    
    printf("Introduce a number: ");
    scanf("%d", &x);
    printf("Introduce another number: ");
    scanf("%d", &y);
    
    estadistica(x, y, &media, &var);
    
    printf("Media: %.2lf\nVar: %0.2lf", media, var);
}*/