/*#include <stdio.h>

#define MAX 128
int main() {
    FILE *fIn, *fOut;
    char inName[MAX], outName[MAX], name[MAX];
    int limit, num1, num2;
    
    printf("Introduce name of in file: ");
    gets(inName);
    printf("Introduce name of out file: ");
    gets(outName);
   
    printf("Introduce limit value: ");
    scanf("%d", &limit);
    
    if((fIn = fopen(inName, "r")) == NULL) {
        printf("Error opening read file");
        return 1;
    }
    
    if((fOut = fopen(outName, "w")) == NULL) {
        printf("Error opening write file");
        return 1;
    }
    
    for(; fscanf(fIn, "%s %d %d", name, &num1, &num2) == 3;){
        if(num1 + num2 < limit) {
            fprintf(fOut, "%s\n", name);
        }
    }
    
    printf("File %s created with results", outName);
    
    fclose(fIn);
    fclose(fOut);
    
    return 0;
}*/