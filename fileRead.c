/*#include <stdio.h>

int main() {
    FILE *f;
    char id[9];
    int model, model1 = 0, model2 = 0, correct, wrong, blank; 
    double grade = 0, media1 = 0, media2 = 0;
    
    f = fopen("download.txt", "r");
    if(f == NULL) {
        printf("Error opening file");
    }
    
    for(int i = 0; fscanf(f, "%s %d %d %d %d %lf", id, &model, &correct, &wrong, &blank, &grade) == 6; i++) {
        if(model == 1) {
            media1+=grade;
            model1++;
        } else {
            media2+=grade;
            model2++;
        }
    }
    
    printf("Average grade of model 1: %.3lf\n", media1/model1);
    printf("Average grade of model 2: %.3lf", media2/model2);
    
    return 0;

}*/