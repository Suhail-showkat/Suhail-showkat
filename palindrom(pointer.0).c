#include <stdio.h>

int main() {
    char s[50], *p, *q;
    int i;

    // Taking string input
    printf("Enter the string to be checked: ");
    scanf("%s", s);

    // Pointing p to the start of the string
    p = s;

    // Moving p to the end of the string
    while (*p != '\0') {
        p++;
    }
    p--; // Adjust p to point to the last character of the string

    // Pointing q to the start of the string
    q = s;

    // Checking if the string is a palindrome
    while (p > q) {
        if (*p != *q) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
        p--;
        q++;
    }

    // If the loop completes without finding mismatches
    printf("The string is a palindrome.\n");
    return 0;
}
