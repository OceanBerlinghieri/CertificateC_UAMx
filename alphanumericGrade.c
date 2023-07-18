/*#include <stdio.h>


#define MAX 16
int main() {
    FILE *fStream, *fList;
    char stream[MAX] = "notas.txt", list[MAX] = "list.txt";
    char dni[9];
    int model, correct, wrong, blank;
    double grade;
    
    if((fStream = fopen(stream, "r")) == 0) {
        printf("Error al abrir el archivo de entrada");
        return 1;
    }
    
    if((fList = fopen(list, "w")) == 0) {
        printf("Error al abrir el archivo de escritura");
        fclose(fStream);
        return 1;
    }
    
    for(int i = 0; fscanf(fStream, "%s %d %d %d %d %lf", 
    dni, &model, &correct, &wrong, &blank, &grade) == 6; i++) {
        if(grade < 5) {
            fprintf(fList, "%s %.3lf Fail\n", dni, grade);
        } else if(grade >= 5 && grade < 7) {
            fprintf(fList, "%s %.3lf Aproved\n", dni, grade);
        } else if(grade >= 7 && grade < 9) {
            fprintf(fList, "%s %.3lf Notable\n", dni, grade);
        } else if(grade >= 9 && grade < 10) {
            fprintf(fList, "%s %.3lf Excelent\n", dni, grade);
        } else if(grade == 10) {
            fprintf(fList, "%s %.3lf MH\n", dni, grade);
        }
    }
    
    return 0;
}*/