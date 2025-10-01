#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    // Addition
    printf("\nMatrix Addition:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("\nMatrix Subtraction:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("\nMatrix Multiplication:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            c[i][j] = 0;
            for(k=0;k<n;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    // Transpose of A
    printf("\nTranspose of Matrix A:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
