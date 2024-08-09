//displays the contents of an integer array using pointers:
#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p;

    // Input the size of the array
    printf("Enter the size of the integer array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the integer array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Set pointer to the beginning of the array
    p = a;

    // Display the elements of the array using the pointer
    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");
    return 0;
}
