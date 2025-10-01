// dice_roll.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(int low, int high) {
    return (rand() % (high - low + 1)) + low;
}

int main() {
    srand((unsigned int)time(NULL));
    int rounds;
    printf("How many rounds do you want to play? ");
    if (scanf("%d", &rounds) != 1 || rounds <= 0) {
        printf("Invalid number of rounds. Exiting.\n");
        return 1;
    }

    int userScore = 0, compScore = 0;
    for (int i = 1; i <= rounds; i++) {
        // User ko enter dabane ka option
        printf("\nPress ENTER to play Round %d...", i);
        getchar(); // leftover newline clear karega
        getchar(); // actual ENTER ke liye wait karega

        int userRoll = get_random(1, 6);
        int compRoll = get_random(1, 6);
        printf("\nRound %d: You rolled %d | Computer rolled %d\n", i, userRoll, compRoll);

        if (userRoll > compRoll) {
            printf("You win this round!\n");
            userScore++;
        } else if (userRoll < compRoll) {
            printf("Computer wins this round!\n");
            compScore++;
        } else {
            printf("This round is a tie.\n");
        }
    }

    printf("\nFinal Score - You: %d | Computer: %d\n", userScore, compScore);
    if (userScore > compScore) printf("Congratulations! You won the game.\n");
    else if (userScore < compScore) printf("Computer wins the game. Better luck next time.\n");
    else printf("The game is a tie.\n");

    return 0;
}
