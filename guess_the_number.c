#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomnumber = (rand() % 100) +1;
    int no_of_guess =0;   
    int guessed;



    do
    {
      printf("guess the number:\n");
      scanf("%d", &guessed);
      if(guessed>randomnumber){
        printf("lower number please!\n");
      }
      else{
        printf("Higher number please!\n");
      }
     no_of_guess++;

    }while (guessed != randomnumber);


     printf("you guessed the number in %d guesses \n",no_of_guess);

  
    return 0;
}