#include <stdio.h>

int main() {
    int matrix[10][10];
    int i, j, n;
    int sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum += matrix[i][i]; // Summing primary diagonal
    }
    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}
