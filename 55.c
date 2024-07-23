#include<stdio.h>
int A(int, int);
int main(){
    int m,n, result;
    printf("Enter the values of m and n ");
    scanf("%d%d", &m, &n);
    result = A(m,n);
    printf("A(%d, %d)= %d \n", m, n, result);
}
int A(int m, int n){
    if (m==0){
        return n+1;
    }
    else if(m>0 && n==0){
        return A(m-1, 1);
    }
    else if (m>0 && n>0){
        return A(m-1, A(m,n-1));
    }
}