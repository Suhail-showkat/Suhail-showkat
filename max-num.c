#include<stdio.h>

int main(){
    int a,b,c,d,e;
    char ch;
    printf("NOTE:-- YOU CAN ONLY CHECK MAXIMUM NUMBER AMONG 5 NUMBER YOU ENTER");
    printf("\n IF YOU WANNA CONTINUE PLEASE PRESS Y/y IF NOT PRESS N/n");
        scanf(" %c",&ch);
        if(ch=='y' || ch=='Y'){
            printf("enter the five number");
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            int max=a;
            if(b>max)
            max=b;
            if(c>max)
            max=c;
            if(d>max)
            max=d;
            if(e>max)
            max=e;
            printf("the maximum number among the five number you entered is %d",max);
        }
        else{
            printf("thankyou for checking the program");

        }
        return 0;
    }
    









    
