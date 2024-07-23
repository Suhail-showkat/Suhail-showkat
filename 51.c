#include <stdio.h>
int swap(int, int);
int main(){
    int x, y;
    printf("Enter the 2 numbers ");
    scanf("%d%d", &x, &y);
    printf("The numbers before swapping are %d%d \n", x,y);
    swap(x,y); //call
}
int swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("The numbers after swapping are %d%d", x, y); // return
}