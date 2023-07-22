/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int **nums, rows, columns, i;
    
    printf("Introduce number of rows: ");
    scanf("%d", &rows);
    printf("Introduce number of columns: ");
    scanf("%d", &columns);
    
    nums = (int**)malloc(rows*sizeof(int));
    if(nums == NULL){
        printf("Error allocating memory");
        return 1;
    }
    
  
    
    for(i = 0; i < rows; i++) {
        nums[i] = (int*)malloc(columns*sizeof(int));
        
        if(nums[i] == NULL){
            for(int j = 0; j < i; j++) {
                free(nums[j]);
            }
            free(nums);
            printf("Error allocating memory");
            return 1;
        }
    }
    
      for(i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("Introduce value for row %d column %d: ", i+1, j+1);
            scanf("%d", &nums[i][j]);
        }
    }
    
    printf("Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < rows; i++){
        free(nums[i]);
    }
    free(nums);
    
    return 0;
    
    
}*/