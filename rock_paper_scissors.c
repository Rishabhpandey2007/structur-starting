#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(0));
int player, computer = (rand()%2)+0;

printf("choose 0 for rock, 1 for paper and 2 for scissor \n");
scanf("%d",&player);
printf("Computer coose %d\n", computer);

if(player == 0 && computer == 0)
{
    printf("Its a Draw \n");
}
else if(player == 0 && computer == 1)
{
    printf("You Lose \n");
}
else if(player == 0 && computer == 2)
{
printf("You Win \n");
}
else if(player == 1 && computer == 0)
{
printf("You Win \n");
}
else if(player == 1 && computer == 1)
{
printf("Its a Draw \n");
}
else if(player == 1 && computer == 2)
{
printf("You Lose \n");
}
else if(player == 2 && computer == 0)
{
printf("You Lose \n");
}
else if(player == 2 && computer == 1)
{
printf("You Win \n");
}
else if(player == 2 && computer == 2)
{
printf("Its a Draw \n");
}
else 
{
    printf("SOMETHING WENT WRONG");
}
return 0;
}