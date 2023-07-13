/*#include <stdio.h>

#define DIM 256

typedef struct{
    char name[DIM];
    int level;
    int exp;
    char champion[DIM];
    int kills;
    int deaths;
    int assists;
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
    scanf("%d", &match.kills);
    printf("Deaths: ");
    scanf("%d", &match.deaths);
    printf("Assists: ");
    scanf("%d", &match.assists);
    
    kda = (double)(match.kills+match.assists) / match.deaths;
    
    printf("%s, level %d and exp %d, your kda ratio with %s is %.2lf",
    match.name, match.level, match.exp, match.champion, kda);
    
    
    
    return 0;
}*/