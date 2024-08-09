#include<stdio.h>

int main()
{
int x;
int *p;
//Declare a integer pointer
x=10;
p = &x;
// Store address of x in pointer p
printf("Value %d is stored at location %d in the memory", x, p);
}