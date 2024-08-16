//program in c to check wether a string is palindrome or not (using pointer).
#include <stdio.h>
int main()
{
    char s[50], *p,*q;
    int i;
    printf("enter the string to be checked ");
    scanf("%s",&s);
    p = &s;
    q = p;

    while(*p != '\0')               //for(; *p!='\0';p++);
    {
         p++; 
    }
    p--;
    printf("%s",&s);
}
