/*#include <stdio.h>


#define MAX 10
int main() {
    int i = 0, qty;
    double numbers[MAX];
     
    printf("How many numbers do you want to compare? Between 2-10: ");
    
    do{
        scanf("%d", &qty);
        if(qty < 2 || qty > 10) {
            printf("Incorrect number, try again: ");
        }
    } while (qty < 2 || qty > 10);

    while(i < qty) {
        printf("Introduce number %d of %d: ", i+1, qty);
        scanf("%lf", &numbers[i]);
        i++;
    }
    
    i = 0;    
    while(i < qty) {
        if(numbers[i] < numbers[qty-1]) {
            printf("Number %.2lf is less than %.2lf\n", numbers[i], numbers[qty-1]);
        }
        i++;
    }
    
    return 0;
}*/