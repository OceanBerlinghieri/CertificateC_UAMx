/*#include <stdio.h>

#define MAX 16

int main() {
    FILE *fList;
    char list[MAX] = "list.txt", dni[9], calification[MAX];
    double grade, sumGrade;
    int i;
    if((fList = fopen(list, "r")) == NULL) {
        printf("Error opening file");
    }
    
    
    
    for(i = 0, sumGrade = 0; fscanf(fList, "%s %lf %s", dni, &grade, calification) == 3; i++){
        sumGrade+=grade;
    }
    
    fclose(fList);
    
    if((fList = fopen(list, "a")) == NULL) {
        printf("Error opening file");
    }
    
    fprintf(fList, "Average grade is %.2lf\n", sumGrade/i);
    
    fclose(fList);
    return 0;

}*/