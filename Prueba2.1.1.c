/*#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int main() {
    Date date1, date2;
    
    printf("Introduce first birth date with spaces: ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    
    printf("Introduce second birth date with spaces: ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if(date1.year == date2.year && date1.month == date2.month && date1.day == date1.day) {
        printf("Congrats, you were born the same day");
    } else if (date1.month == date2.month && date1.day == date2.day) {
        printf("You share the birthday. You are %d years of distance", date1.year - date2.year);
    } else {
        printf("Oops! You don't share birthday");
    }

    return 0;   
}*/