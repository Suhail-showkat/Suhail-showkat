#include<stdio.h>
long int fact (int);
int main(){
    int n;
    long int ans;
    printf("Enter the number ");
    scanf("%d", &n);
    ans= fact(n);
    printf("the factorial of %d is %li", n, ans);
}
long int fact (int n){
    if(n>1){
        return n* fact (n-1);
    }
    else
    return 1;
}
