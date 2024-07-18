#include <stdio.h>

int main() {
    int a[100], n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Value of element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
