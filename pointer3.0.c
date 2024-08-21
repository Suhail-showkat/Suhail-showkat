#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int *ptr;                          // Declare a pointer to an integer
    int i;

    ptr = arr;  // Assign the address of the first element of the array to the pointer

    // Print array elements using pointer arithmetic
    for(i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    // Accessing elements using the array name as a pointer
    for(i = 0; i < 5; i++) {
        printf("Using array name as pointer - Element %d: %d\n", i, *(arr + i));
    }

    return 0;
}
