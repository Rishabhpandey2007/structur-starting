// math_quiz.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(int low, int high) {
    return (rand() % (high - low + 1)) + low;
}

int main() {
    srand((unsigned int)time(NULL));
    int qcount;
    printf("How many questions do you want? ");
    if (scanf("%d", &qcount) != 1 || qcount <= 0) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    int score = 0;
    for (int i = 1; i <= qcount; i++) {
        int op = get_random(0, 3); // 0:+  1:-  2:*  3:/
        int a, b, correct;
        if (op == 0) { // addition
            a = get_random(1, 50); b = get_random(1, 50);
            correct = a + b;
            printf("Q%d: %d + %d = ?\n", i, a, b);
        } else if (op == 1) { // subtraction (ensure a>=b)
            a = get_random(0, 99); b = get_random(0, a);
            correct = a - b;
            printf("Q%d: %d - %d = ?\n", i, a, b);
        } else if (op == 2) { // multiplication
            a = get_random(1, 12); b = get_random(1, 12);
            correct = a * b;
            printf("Q%d: %d * %d = ?\n", i, a, b);
        } else { // division - make integer result
            b = get_random(1, 12);
            int mult = get_random(1, 12);
            a = b * mult;
            correct = a / b;
            printf("Q%d: %d / %d = ? (integer)\n", i, a, b);
        }

        int ans;
        printf("Your answer: ");
        if (scanf("%d", &ans) != 1) {
            printf("Invalid input. Skipping this question.\n");
            while (getchar() != '\n'); // clear input
            continue;
        }
        if (ans == correct) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong. Correct answer = %d\n", correct);
        }
    }

    printf("\nQuiz over. Your score: %d/%d\n", score, qcount);
    return 0;
}
