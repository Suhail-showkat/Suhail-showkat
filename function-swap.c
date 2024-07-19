#include <stdio.h>

int swap(int *x, int *y);

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The numbers before swap are %d and %d\n", a, b);
    swap(&a, &b);//call
    printf("The numbers after swap are %d and %d\n", a, b);
    return 0;
}

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
