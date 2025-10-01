#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    
    printf("\n1. Normal Right-angled Triangle:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    
    printf("\n2. Inverted Right-angled Triangle:\n");
    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    
    printf("\n3. Right-aligned Right-angled Triangle:\n");
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf("  "); 
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

   
    printf("\n4. Inverted Right-aligned Right-angled Triangle:\n");
    for(i = n; i >= 1; i--) {
        for(j = i; j < n; j++) {
            printf("  "); 
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    


    // Equilateral triangle (filled)
    printf("\nEquilateral Triangle (Filled):\n");
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) printf(" ");
        for(j = 1; j <= (2*i-1); j++) printf("*");
        printf("\n");
    }

    // Equilateral triangle (edges only)
    printf("\nEquilateral Triangle (Edges only):\n");
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) printf(" ");
        for(j = 1; j <= (2*i-1); j++) {
            if (j == 1 || j == 2*i-1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
