/*#include <stdio.h>
#include <string.h>

#define DIM 256

int main() {
    char m[DIM]; //m = month
    
    printf("Month: ");
    gets(m);
    
    if(strcmp(m, "january") == 0|| strcmp(m, "march") == 0|| strcmp(m, "may") == 0 ||
    strcmp(m, "july") == 0|| strcmp(m, "august") == 0|| strcmp(m, "october") == 0|| 
    strcmp(m, "december") == 0) {
        printf("%s has 31 days", m);
    } else if (strcmp(m, "april") == 0|| strcmp(m, "june") == 0 ||
    strcmp(m, "september") == 0|| strcmp(m, "november") == 0) {
        printf("%s has 30 days", m);
    } else if (strcmp(m, "february") == 0) {
        printf("%s has 28 days", m);
    } else {
        printf("Month not correct");
    }
    
    return 0;
}*/