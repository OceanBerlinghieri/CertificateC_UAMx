/*#include <stdio.h>

#define MAX 128

int main() {
    int num1, num2, num4, num5, limit;
    double num3, mean = 0, qty;
    char in[MAX];
    FILE *fIn;
    
    printf("Introduce name of in file: ");
    gets(in);
    
    printf("Introduce a value: ");
    scanf("%d", &limit);
    
    if((fIn = fopen(in, "r")) == NULL) {
        printf("Error opening file");
        return 1;
    }
    
    for(qty = 0;fscanf(fIn, "%d %d %lf %d %d", &num1, &num2, &num3, &num4, &num5) == 5;) {
        if(num4 > limit) {
            mean+=num2;
            qty++;
        }
    }
    
    if(qty == 0) {
        mean = 0.0;
    } else {
        mean/=qty;
    }
    
    printf("Mean of second column with limit %d is: %.2lf", limit, mean);
}*/