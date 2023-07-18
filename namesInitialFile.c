#include <stdio.h>

#define MAX 16

int main() {
    FILE *fFile;
    char file[MAX], name[256], initial;
    int number1, number2, count;
    
    printf("Introduce the name of the file: ");
    gets(file);
    
    printf("Introduce a letter: ");
    initial = getchar();
    
    do {
      if((fFile = fopen(file, "r")) == NULL) {
        printf("Error opening file, try again: ");
    }  
    } while ((fFile = fopen(file, "r")) == NULL);
    
    for(count = 0; fscanf(fFile, "%s %d %d", name, &number1, &number2) == 3;) {
        if(initial == name[0]) {
            count++;
        }
    }
    
    fclose(fFile);
    
    if((fFile = fopen(file, "a")) == NULL) {
        printf("Can't write to file");
    }
    
    fprintf(fFile, "The number of names with initial %c is %d\n", initial, count);
    printf("Info has been written at the end of the file");
    fclose(fFile);
    
    return 0;
}