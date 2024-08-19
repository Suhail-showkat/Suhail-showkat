#include <stdio.h>

int main() {
    int var = 10;       // Declare an integer variable
    int *ptr;           // Declare a pointer to an integer

    ptr = &var;         // Assign the address of 'var' to 'ptr'

    // Print the value of 'var' using the pointer
    printf("Value of var = %d\n", *ptr);

    // Print the address of 'var' using the pointer
    printf("Address of var = %p\n", ptr);

    // Modify the value of 'var' using the pointer
    *ptr = 20;
    printf("New value of var = %d\n", var);

    return 0;
}
