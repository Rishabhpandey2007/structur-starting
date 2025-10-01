#include <stdio.h>
#include <stdlib.h>


char board[3][3];


void initBoard() {
    char c = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = c++;
        }
    }
}


void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n\n");
}


char checkWinner() {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return ' '; 
}


int isFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

int main() {
    int move;
    char winner = ' ';
    initBoard();

    printf("=== TIC TAC TOE ===\n");
    printf("Player 1 = X | Player 2 = O\n");

    printBoard();

    for (int turn = 0; turn < 9 && winner == ' '; turn++) {
        int player = (turn % 2 == 0) ? 1 : 2;
        char mark = (player == 1) ? 'X' : 'O';

        printf("Player %d, enter your move (1-9): ", player);
        scanf("%d", &move);

        if (move < 1 || move > 9) {
            printf("Invalid move! Try again.\n");
            turn--;
            continue;
        }

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Position already taken! Try again.\n");
            turn--;
            continue;
        }

        board[row][col] = mark;
        printBoard();

        winner = checkWinner();
    }

    if (winner == 'X')
        printf("Player 1 (X) WINS!\n");
    else if (winner == 'O')
        printf("Player 2 (O) WINS!\n");
    else
        printf("It's a TIE!\n");

    return 0;
}






