/*#include <stdio.h>
#include <string.h>

#define MAX 5

int main() {
    int nums[MAX], tmp;
    
    for(int i = 0; i < MAX; i++) {
        printf("Introduce number %d: ", i);
        scanf("%d", &nums[i]);
    }
    
    for(int i = 0; i < MAX; i++){
        tmp = 0;
        for (int j = i; j < MAX; j++){
            if(nums[i] < nums[j]) {
                tmp++;
            }
        }
        printf("Number %d is smaller than other %d posterior numbers\n", nums[i], tmp);
    }
    
    return 0;
}*/