#include<stdio.h>
int main(){
    int a[100], n, x, i, flag=0;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the elements you want to find:\n");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(x==a[i]){
            printf("Found at position %d", i+1);
            flag=1;
        }
    }
        if(flag==0){
            printf("Not found");
        }
    return 0;
}