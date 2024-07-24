#include <stdio.h>

int act()
{
    int m, n;
    printf("enter the values \n");
    scanf("%d %d", &m, &n);
    if (m == 0) 
        return (n + 1);
   
}

int main() {
    int result = act();
    printf("Result: %d\n", result);
    return 0;
}
