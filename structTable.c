/*#include <stdio.h>

#define DIM 256
#define SIZE 3

typedef struct{
    char name[DIM];
    int level;
    int exp;
    char champion[DIM];
    int data[SIZE];
} Match;


int main(){
    Match match;
    double kda = 0;
    
    printf("Name: ");
    gets(match.name);
    printf("Level: ");
    scanf("%d", &match.level);
    printf("Exp: ");
    scanf("%d", &match.exp);
    printf("Champion: ");
    getchar();
    gets(match.champion);
    printf("Kills: ");
    scanf("%d", &match.data[0]);
    printf("Deaths: ");
    scanf("%d", &match.data[2]);
    printf("Assists: ");
    scanf("%d", &match.data[1]);
    
    kda = (double)(match.data[0]+match.data[1]) / match.data[2];
    
    printf("%s, level %d and exp %d, your kda ratio with %s is %.2lf",
    match.name, match.level, match.exp, match.champion, kda);
    
    
    
    return 0;
}*/