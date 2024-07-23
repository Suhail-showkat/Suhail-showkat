#include <stdio.h>

int main() {
    int a[10][10], i, j, m, n;
    
    // Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows and columns of the matrix respectively: ");
    scanf("%d%d", &m, &n);
    
    // Prompt the user to enter the elements of the matrix
    printf("Enter the elements of the matrix row by row:\n");
    for (i = 0; i < m; i++) {        // Controls rows
        for (j = 0; j < n; j++) {    // Controls columns
            scanf("%d", &a[i][j]);
        }    
    }
    
    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");  // New line after each row
    }
    
    return 0;
}
