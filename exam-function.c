#include <stdio.h>

                      int fasil(int a)
{
    printf("--fasil\n");
    printf("%d\n",a);
    int result =90;
    return result;
}
                       int suhail(int s)
{
    printf("--suhail\n");
    printf("%d\n",s);
     int result =80;
     return result;
}
                        int rakiya(int r)
{
printf ("--rakiya\n");
printf ("%d\n",r);
 int result =100;
 return result;
}   
int main()
{

    int x=fasil(9);
    printf ("%d\n",x);
   int y=suhail(12);
    printf ("%d\n",y);
    int r=rakiya(10);
    printf ("%d\n",r);
 
    return 0;
}
