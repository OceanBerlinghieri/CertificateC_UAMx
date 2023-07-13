/*#include <stdio.h>

#define DIM 256
#define SIZE 3
typedef struct {
  char champion[DIM];
  int data[SIZE];
} Game;
typedef struct{
    char name[DIM];
    int level;
    int exp;
    Game game;
} Summoner;


int main(){
    Summoner match;
    double kda = 0;
    
    printf("Name: ");
    gets(match.name);
    printf("Level: ");
    scanf("%d", &match.level);
    printf("Exp: ");
    scanf("%d", &match.exp);
    printf("Champion: ");
    getchar();
    gets(match.game.champion);
    printf("Kills: ");
    scanf("%d", &match.game.data[0]);
    printf("Deaths: ");
    scanf("%d", &match.game.data[2]);
    printf("Assists: ");
    scanf("%d", &match.game.data[1]);
    
    kda = (double)(match.game.data[0]+match.game.data[1]) / match.game.data[2];
    
    printf("%s, level %d and exp %d, your kda ratio with %s is %.2lf",
    match.name, match.level, match.exp, match.game.champion, kda);
    
    
    
    return 0;
}*/