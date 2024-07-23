#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the number of which you want table");
    scanf("%d",&a);
    printf("enter the limit of your table");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        c=a*i;
        printf("\n%d x %d = %d",a,i,c);
    }
    return 0;
}
