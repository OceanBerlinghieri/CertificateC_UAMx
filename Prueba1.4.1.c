/*#include <stdio.h>

#define SUM 3
#define MOD 2

typedef struct{
    int nums[SUM];
    int sum;
} Sum;

typedef struct {
    Sum sum[MOD];
    int mod;
} Mod;
int main() {
    Mod mod;

    printf("Introduce first number of first table: ");
    scanf("%d", &mod.sum[0].nums[0]);
    printf("Introduce second number of first table: ");
    scanf("%d", &mod.sum[0].nums[1]);
    printf("Introduce third number of first table: ");
    scanf("%d", &mod.sum[0].nums[2]);
    
    for(int i = 0; i < SUM; i++)
        mod.sum[0].sum+=mod.sum[0].nums[i];
    
    printf("Introduce first number of second table: ");
    scanf("%d", &mod.sum[1].nums[0]);
    printf("Introduce second number of second table: ");
    scanf("%d", &mod.sum[1].nums[1]);
    printf("Introduce third number of second table: ");
    scanf("%d", &mod.sum[1].nums[2]);
    
    for(int i = 0; i < SUM; i++)
        mod.sum[1].sum+=mod.sum[1].nums[i];
    
    mod.mod = mod.sum[0].sum % mod.sum[1].sum;
    
    printf("The sum of elements in first table is: %d\n", mod.sum[0].sum);
    printf("The sum of elements in second table is: %d\n", mod.sum[1].sum);
    printf("Mod of both sums is: %d", mod.mod);
    
    return 0;

}*/