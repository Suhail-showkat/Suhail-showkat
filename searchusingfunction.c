#include <stdio.h>
int search(int a[],int n, int x);
int main(){
    int a[50], n, x, i, d;
    printf("Enter the size of the integer array: ");
    scanf("%d", &n);
    printf("Enter the elements of the integer array: ");
    for (i=0; i<n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search in the array: ");
    scanf("%d", &x);
    d=search(a, n, x);
    if(d==-1)
    printf("Not found");
    else
    printf("Found at location %d", d);
}
int search(int a[], int n, int x){
    int i;
    for(i=0; i<n; i++){
        if(x==a[i]){
          
          return i+1;
        }
    }
        return -1;
    }
