#include <stdio.h>

long int fact(int);

int main() {
    int n;
    long int ans;
    
    printf("Enter the +ve number: ");
    scanf("%d", &n);

    ans = fact(n);
    printf("The factorial of %d is %ld\n", n, ans);

    return 0;
}

long int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
