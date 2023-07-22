/*#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, *table;
    double mean = 0.0;
    
    printf("How many numbers are you going to introduce?: ");
    scanf("%d", &size);
    
    table = (int*)malloc(size*sizeof(int));
    
    if(table == NULL) {
        printf("Failed memory reservation");
        return 1;
    }
    
    for(int i = 0; i < size; i++) {
        printf("Introduce %d number: ", i+1);
        scanf("%d", &table[i]);
        mean += table[i];
    }
    
    printf("Average of numbers readed is %.2lf", mean/size);
    
    return 0;
}*/