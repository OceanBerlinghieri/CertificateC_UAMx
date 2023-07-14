/*#include <stdio.h>
#include <string.h>

#define DAY 2
#define MONTH 2
#define YEAR 4

int main(){
    char day1[DAY], month1[MONTH], year1[YEAR], day2[DAY], month2[MONTH], year2[YEAR];
    
    printf("Date 1: ");
    scanf("%s", day1);
    scanf("%s", month1);
    scanf("%s", year1);
    
    printf("Date 2: ");
    scanf("%s", day2);
    scanf("%s", month2);
    scanf("%s", year2);
    
    if(strcmp(year1, year2) < 0) {
        printf("Date 1 is before date 2");
    } else if(strcmp(year1, year2) > 0) {
        printf("Date 2 is before date 1");
    } else if(strcmp(month1, month2) < 0) {
        printf("Date 1 is before date 2");
    } else if(strcmp(month1, month2) > 0) {
        printf("Date 2 is before date 1");
    } else if(strcmp(day1, day2) < 0) {
        printf("Date 1 is before date 2");
    } else if(strcmp(day1, day2) > 0) {
        printf("Date 2 is before date 1");
    } else {
        printf("Both dates are equal");
    }
    return 0;
}*/