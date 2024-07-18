#include <stdio.h>

int main() 
{
    int a[100], n, i;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Value of element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("The elements of the array in reverse order are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
