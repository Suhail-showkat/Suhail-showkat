#include<stdio.h>

int main (){
    int a,flag=0;
    printf("enter the number to check whether it is prime or not");
    scanf("%d",&a);
    if(a<=1){
        flag=1;
    }
    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("%d is a prime no.",a);
    }
    else{
        printf("%d is not a prime no.",a);
    }
    return 0;
}
