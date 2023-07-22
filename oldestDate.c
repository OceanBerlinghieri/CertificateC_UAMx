/*#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

Date oldest(Date date1, Date date2) {
    if(date1.year > date2.year) {
        return date2;
    } else if (date1.year < date2.year) {
        return date1;
    } else if(date1.month > date2.month) {
        return date2;
    } else if (date1.month < date2.month) {
        return date1;
    } else if(date1.day > date2.day) {
        return date2;
    } else if (date1.day < date2.day) {
        return date1;
    }
    
    return date1;
}

int main() {
    Date *d, win, current;
    int size;
    
    printf("How many dates are you going to introduce?: ");
    scanf("%d", &size);
    
    d = (Date*)malloc(size * sizeof(Date));
    
    if(d == NULL){
        printf("Failed mamory reservation");
        return 1;
    }
    
    for(int i = 0; i < size; i++) {
        printf("Introduce day: ");
        scanf("%d", &d[i].day);
        
        printf("Introduce month: ");
        scanf("%d", &d[i].month);
        
        printf("Introduce year: ");
        scanf("%d", &d[i].year);
        
        current = d[i];
        
        if(i == 0)
            win = current;
        else
            win = oldest(win, current);
    }
    
    printf("Oldest date is: %d/%d/%d", win.day, win.month, win.year);
    
    return 0;
}*/