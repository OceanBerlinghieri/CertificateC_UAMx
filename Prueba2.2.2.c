/*#include <stdio.h>
#include <string.h>

#define NUMS 10
int main() {
    int nums[NUMS], i = 0;
    
    do {
        printf("Introduce a number (0 to terminate): ");
        scanf("%d", &nums[i]);
        if(nums[i] == 0)
            break;
        i++;
        
    } while (i < NUMS);
    
    if(i == 10){
        printf("Max numbers reached, continue...\n");
    }
    
    if(nums[0] == 0) {
        printf("No numbers introduced");
    } else {
        printf("Numbers introduced are: ");
        while(i > 0) {
            printf("%d ", nums[i-1]);
            i--;
        }
    }
    
    return 0;
}*/