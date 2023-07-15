/*#include <stdio.h>
#include <math.h>

#define SIZE 10

int main(){
    int numbers[SIZE], sum = 0, negative = 0, i = 0;
    
    for(i = 0; i < SIZE; i++){
        printf("Introduce a number: ");
        scanf("%d", &numbers[i]);
        
        if(numbers[i] == 0)
            break;
    }
    
    for(int j = 0; j < i; j++) {
        if(numbers[j] > 0) {
            sum+=numbers[j];
        } else if(numbers[j] < 0)
            negative++;
    }
    
    printf("%d numbers readed, %d were negative\n", i, negative);
    printf("The sum of the %d positive numbers is %d", i-1-negative, sum);
    return 0;
}

int main(){
    int numbers[SIZE], sum = 0, negative = 0, i = 0;
    
    for(i = 0; i < SIZE; i++){
        printf("Introduce a number: ");
        scanf("%d", &numbers[i]);
        
        if(numbers[i] == 0)
            break;
    }
    
    for(int j = 0; j < i; j++) {
        printf("%d ", numbers[j]);
    }
    return 0;
}*/