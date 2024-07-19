#include <stdio.h>

int add(int *x, int *y);

int main() 
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = add(&a, &b); //call
    printf("Sum of the two numbers is %d\n", sum);
}

int add(int *x, int *y)
{
    int sum;
    sum = *x + *y;
    return sum;
}