#include<stdio.h>

int main()
{
    char arr[100];
    int i =0;
    printf("Enter the string: \n");
    scanf("%s", &arr);
    printf("The string is:\n");
    while (arr[i]!='\0'){
        printf("%c", arr[i]);
        i++;
    }
    printf("\n The length of the string is %d ", i);
    return 0;
}