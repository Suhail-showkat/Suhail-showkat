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

    // Point to the first element of the array
    p = a;  // or p = &a[0];

    printf("\n\n");
    printf("Values of the array are:\n");

    // Display the elements of the array using the pointer
    for(i = 0; i < n; i++) {
        printf("%d ", *p);
        p++;
    }

    printf("\n");
    return 0;
}
