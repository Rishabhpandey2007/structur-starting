#include <stdio.h>


long recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * recursive(n-1);
}

int main() {
    int n, i;
    long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

   
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial using loop = %ld\n", fact);

    
    printf("Factorial using recursion = %ld\n", recursive(n));

    return 0;
}
