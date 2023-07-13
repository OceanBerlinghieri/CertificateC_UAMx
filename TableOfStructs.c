/*#include <stdio.h>

#define DIM 256
#define SIZE 3
#define SUMMONERS 2
typedef struct {
  char champion[DIM];
  int data[SIZE];
} Game;

typedef struct{
    char name[DIM];
    Game game[SIZE];
} Summoner;

//Keep data for the same summoner through 3 different matches and calculate the kda for each one.
int main(){
    Summoner summoner[SUMMONERS];
    int kills = 0, deaths = 0, assists = 0;
    double kda = 0;
    
   //P1
   printf("Player 1\n");
   printf("Name: ");
   gets(summoner[0].name);
   
   printf("First match: \n");
   printf("Champion: ");
   gets(summoner[0].game[0].champion);
   printf("Kills: ");
   scanf("%d", &summoner[0].game[0].data[0]);
   kills+= summoner[0].game[0].data[0];
   printf("Deaths: ");
   scanf("%d", &summoner[0].game[0].data[2]);
   deaths+= summoner[0].game[0].data[2];
   printf("Assists: ");
   scanf("%d", &summoner[0].game[0].data[1]);
   assists+=summoner[0].game[0].data[1];
   getchar();
   
   printf("Second match: \n");
   printf("Champion: ");
   gets(summoner[0].game[1].champion);

   printf("Kills: ");
   scanf("%d", &summoner[0].game[1].data[0]);
   kills+=summoner[0].game[1].data[0];
   printf("Deaths: ");
   scanf("%d", &summoner[0].game[1].data[2]);
   deaths+=summoner[0].game[1].data[2];
   printf("Assists: ");
   scanf("%d", &summoner[0].game[1].data[1]);
   assists+=summoner[0].game[1].data[1];
   getchar();
   
   printf("Third match: \n");
   printf("Champion: ");
   gets(summoner[0].game[2].champion);

   printf("Kills: ");
   scanf("%d", &summoner[0].game[2].data[0]);
   kills+=summoner[0].game[2].data[0];
   printf("Deaths: ");
   scanf("%d", &summoner[0].game[2].data[2]);
   deaths+=summoner[0].game[2].data[2];
   printf("Assists: ");
   scanf("%d", &summoner[0].game[2].data[1]);
   assists+=summoner[0].game[2].data[1];
   
   kda = (double)(kills+assists)/deaths;
   printf("Your KDA of the last 3 games has been: %.2lf\n", kda);
   
   //P2
   printf("Player 2\n");
   printf("Name: ");
   getchar();
   gets(summoner[1].name);
   
   printf("First match: \n");
   printf("Champion: ");
   gets(summoner[1].game[0].champion);
   printf("Kills: ");
   scanf("%d", &summoner[1].game[0].data[0]);
   kills = summoner[1].game[0].data[0];
   printf("Deaths: ");
   scanf("%d", &summoner[1].game[0].data[2]);
   deaths = summoner[1].game[0].data[2];
   printf("Assists: ");
   scanf("%d", &summoner[1].game[0].data[1]);
   assists = summoner[1].game[0].data[1];
   getchar();
   
   printf("Second match: \n");
   printf("Champion: ");
   gets(summoner[1].game[1].champion);

   printf("Kills: ");
   scanf("%d", &summoner[1].game[1].data[0]);
   kills+=summoner[1].game[1].data[0];
   printf("Deaths: ");
   scanf("%d", &summoner[1].game[1].data[2]);
   deaths+=summoner[1].game[1].data[2];
   printf("Assists: ");
   scanf("%d", &summoner[1].game[1].data[1]);
   assists+=summoner[1].game[1].data[1];
   getchar();
   
   printf("Third match: \n");
   printf("Champion: ");
   gets(summoner[1].game[2].champion);

   printf("Kills: ");
   scanf("%d", &summoner[1].game[2].data[0]);
   kills+=summoner[1].game[2].data[0];
   printf("Deaths: ");
   scanf("%d", &summoner[1].game[2].data[2]);
   deaths+=summoner[1].game[2].data[2];
   printf("Assists: ");
   scanf("%d", &summoner[1].game[2].data[1]);
   assists+=summoner[1].game[2].data[1];
   
   kda = (double)(kills+assists)/deaths;
   printf("Your KDA of the last 3 games has been: %.2lf", kda);
    
    
    return 0;
}*/