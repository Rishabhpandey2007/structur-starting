#include <stdio.h>

int multiply(int *arr, int n) {
    int i, product = 1;
    for(i = 0; i < n; i++) {
        product *= *(arr + i);
    }
    return product;
}

int main() {
    int arr[10], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Product of numbers = %d\n", multiply(arr, n));

    return 0;
}

