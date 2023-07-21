/*#include <stdio.h>

#define DIM 3
#define INCREMENT 5

void incrementTable(int *table, int increment) {
    for(int i = 0; i < DIM; i++, table++) {
    *table+=increment;
    }
}

int main() {
    int table[DIM] = {2,4,7};
    
    printf("Table is %d %d %d\n", table[0], table[1], table[2]);
    
    incrementTable(table, INCREMENT);
    
    printf("New table is: %d %d %d", table[0], table[1], table[2]);
    
    return 0;
}*/