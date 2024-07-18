#include<stdio.h>

int main()
{
 char arr[100];
 int i;
 printf("Enter the string: \n");
 scanf("%s", arr);
 for(i=0; arr[i]!='\0'; i++ ){
 }
 printf("The string in reverse order is:\n");
    for (i = i - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");
 return 0;
}