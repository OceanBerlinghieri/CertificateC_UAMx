/*#include <stdio.h>

#define DIM 256
#define SIZE 3
#define SUMMONERS 5
typedef struct {
  char champion[DIM];
  int data[SIZE];
} Game;
typedef struct{
    char name[DIM];
    Game game;
} Summoner;


int main(){
    Summoner match[SUMMONERS];
    int teamKills = 0, teamDeaths = 0, teamAssists = 0;
    double kda = 0, ratioPlayer;
    
    //P1
    printf("Player 1: ");
    printf("Name: ");
    gets(match[0].name);
    printf("Champion: ");
    getchar();
    gets(match[0].game.champion);
    printf("Kills: ");
    scanf("%d", &match[0].game.data[0]);
    printf("Deaths: ");
    scanf("%d", &match[0].game.data[2]);
    printf("Assists: ");
    scanf("%d", &match[0].game.data[1]);
    ratioPlayer = (double)(match[0].game.data[0] + match[0].game.data[1]) / match[0].game.data[2];
    printf("Your ratio is %.2lf\n", ratioPlayer);
    
    teamKills+=match[0].game.data[0];
    teamDeaths+=match[0].game.data[2];
    teamAssists+=match[0].game.data[1];
    
    //P2
    printf("Player 2: ");
    printf("Name: ");
    getchar();
    gets(match[1].name);
    printf("Champion: ");
    getchar();
    gets(match[1].game.champion);
    printf("Kills: ");
    scanf("%d", &match[1].game.data[0]);
    printf("Deaths: ");
    scanf("%d", &match[1].game.data[2]);
    printf("Assists: ");
    scanf("%d", &match[1].game.data[1]);
    ratioPlayer = (double)(match[1].game.data[0] + match[1].game.data[1]) / match[1].game.data[2];
    printf("Your ratio is %.2lf\n", ratioPlayer);
    
    teamKills+=match[1].game.data[0];
    teamDeaths+=match[1].game.data[2];
    teamAssists+=match[1].game.data[1]; 
    
    //P3
    printf("Player 3: ");
    printf("Name: ");
    getchar();
    gets(match[2].name);
    printf("Champion: ");
    getchar();
    gets(match[2].game.champion);
    printf("Kills: ");
    scanf("%d", &match[2].game.data[0]);
    printf("Deaths: ");
    scanf("%d", &match[2].game.data[2]);
    printf("Assists: ");
    scanf("%d", &match[2].game.data[1]);
    ratioPlayer = (double)(match[2].game.data[0] + match[2].game.data[1]) / match[2].game.data[2];
    printf("Your ratio is %.2lf\n", ratioPlayer);
    
    teamKills+=match[2].game.data[0];
    teamDeaths+=match[2].game.data[2];
    teamAssists+=match[2].game.data[1];
    
    //P4
    printf("Player 4: ");
    printf("Name: ");
    getchar();
    gets(match[3].name);
    printf("Level: ");
    printf("Champion: ");
    getchar();
    gets(match[3].game.champion);
    printf("Kills: ");
    scanf("%d", &match[3].game.data[0]);
    printf("Deaths: ");
    scanf("%d", &match[3].game.data[2]);
    printf("Assists: ");
    scanf("%d", &match[3].game.data[1]);
    ratioPlayer = (double)(match[3].game.data[0] + match[3].game.data[1]) / match[3].game.data[2];
    printf("Your ratio is %.2lf\n", ratioPlayer);
    
    teamKills+=match[3].game.data[0];
    teamDeaths+=match[3].game.data[2];
    teamAssists+=match[3].game.data[1];
    
    //P5
    printf("Player 5: ");
    printf("Name: ");
    getchar();
    gets(match[4].name);
    printf("Champion: ");
    getchar();
    gets(match[4].game.champion);
    printf("Kills: ");
    scanf("%d", &match[4].game.data[0]);
    printf("Deaths: ");
    scanf("%d", &match[4].game.data[2]);
    printf("Assists: ");
    scanf("%d", &match[4].game.data[1]);
    ratioPlayer = (double)(match[4].game.data[0] + match[4].game.data[1]) / match[4].game.data[2];
    printf("Your ratio is %.2lf\n", ratioPlayer);
    
    teamKills+=match[4].game.data[0];
    teamDeaths+=match[4].game.data[2];
    teamAssists+=match[4].game.data[1];
    
    kda = (double)(teamKills+teamAssists) / teamDeaths;
    
    printf("KDA of your match has been %d/%d/%d with ratio %.2lf", 
    teamKills, teamDeaths, teamAssists, kda);
    
    
    
    return 0;
}*/