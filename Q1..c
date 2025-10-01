#include <stdio.h>

int main() {
    int a, b;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

 
        div = (float)a / b;
        printf("Division: %f\n", div);
 

    return 0;
}
