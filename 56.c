#include <stdio.h>

// Function to calculate the Fibonacci number at a specific position
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms, i;

    // Input the number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series up to %d terms:\n", terms);

    // Print the Fibonacci series
    for (i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
