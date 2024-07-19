#include <stdio.h>

int add(int *x, int *y);
int sub(int *x, int *y);

int main() 
{
    int a, b, sum, difference;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = add(&a, &b); //call
    printf("Sum of the two numbers is %d\n", sum);
    difference = sub(&a, &b); //call
    printf("Difference of the two numbers is %d\n", difference);
}

int add(int *x, int *y)
{
    int sum;
    sum = *x + *y;
    return sum;
}

int sub(int *x, int *y)
{
    int difference;
    difference = *x - *y;
    return difference;
}
