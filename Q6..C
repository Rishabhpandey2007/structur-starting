#include <stdio.h>

// Call by value
void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf(" swapValue: a = %d, b = %d\n", x, y);
}

// Call by reference
void swapReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swapValue(a, b);  // Only copy changes

    swapReference(&a, &b); // Actual variables swap
    printf("After swapReference: a = %d, b = %d\n", a, b);

    return 0;
}

