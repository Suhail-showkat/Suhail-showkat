#include <stdio.h>
int add(int, int);
int sub(int, int);
int main(){
    int a, b, sum, diff, diff2;
    printf("Enter the 2 numbers ");
    scanf("%d%d", &a, &b);
    sum=add(a,b);
    printf("The sum is %d \n", sum);
    diff= sub(a,b);
    printf("The difference of %d and %d is %d \n", a, b, diff);
    diff2= sub(b,a);
    printf("The difference of %d and %d is %d", b, a, diff2);
}
int add(int a, int b){
    return a+b;
}
int sub (int a, int b){
    return a-b;
}
