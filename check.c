#include <stdio.h>
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 2
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

// 3
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// # 4
#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
 
// #5
#include <stdio.h>
int main()
{
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 5; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}

// #6
#include <stdio.h>
int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// #7
#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of array");
    scanf("%d", &size);
    int arr[size];
    printf("enter the elements of array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = size; j > 0; j--)
    {
        printf("%d", arr[j - 1]);
    }
}

// #8
#include <stdio.h>
int main()
{
    char arr[50];
    printf("enter the name in array");
    scanf("%s", arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
}

// #9
#include <stdio.h>
int main()
{
    int i;
    char arr[50];
    printf("enter the name in array");
    scanf("%s", arr);
    for (i = 0; arr[i] != '\0'; i++)
        ;
    printf("%d", i);
}

// #10
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[50];
    printf("enter the name in array");
    scanf("%s", arr);
    printf("%s", strrev(arr));
}

// #11
#include <stdio.h>
int main()
{
    int i;
    char arr[50];
    printf("enter the name in array");
    scanf("%s", arr);
    for (i = 0; arr[i] != '\0'; i++)
        ;
    // i--;
    for (int j = i; j >= 0; j--)
    {
        printf("%c", arr[j]);
    }
}

// #palindrom
#include <stdio.h>
int main()
{
    int i;
    char arr[50], rev[50];
    printf("enter the name in array");
    scanf("%s", arr);
    for (i = 0; arr[i] != '\0'; i++)
    {
        for (int a = i; a >= i; a++)
        {
            rev[a] = arr[i];
        }
    }
    for (int j = 0; rev[j] != '\0'; j++)
    {
        printf("%c", rev[j]);
    }
    for (int k = 0; k < 1; k++)
    {
        if (arr[k] != rev[k])
        {
            printf("the string is not palindrom");
        }
    }
}

// #linear search
#include <stdio.h>
int main()
{
    int arr[5], target, flag = 1;
    printf("enter the elements in an array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element you want to find");
    scanf("%d", &target);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            printf("your element %d is found at index %d", target, i);
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("element not found");
    }
}

// #sort array
#include <stdio.h>
int main()
{
    int arr[5], target, flag = 1;
    printf("enter the elements in an array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}

// palindrome
#include <stdio.h>
int main()
{
    int i, flag = 0;
    char arr[10];
    printf("enter your name");
    scanf("%s", arr);
    for (i = 0; arr[i] != '\0'; i++)
        ;
    char rev[i];

    for (int j = 0; j < i; j++)
    {
        rev[j] = arr[i - j - 1];
    }
    for (int j = 0; j < i; j++)
    {
        if (arr[j] != rev[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("the string you entered is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}

// sum of intereger element in array
#include <stdio.h>
int main()
{
    int size;
    printf("enter the size of array");
    scanf("%d", &size);
    printf("enter elements");
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("sum is %d", sum);
}

// matrix
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("enter the elements in row ");
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("your entered martrix is");
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

// transpose of matrix
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("enter the elements in your matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j][i]);
        }
    }
    printf("the transpose of your matrix is");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

// diagonal elements of matrix sum
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("enter the elements in matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    printf("the sum of diagonal elements are");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                sum += arr[i][j];
        }
    }
    printf("%d", sum);
}

// sum of 2 matrices
#include <stdio.h>
int main()
{
    int arr[3][3], sec[3][3];
    printf("enter the elements in first matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("enter the elements in second matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &sec[i][j]);
        }
    }
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr[i][j] + sec[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }
}

// product of two matrices
#include <stdio.h>
int main()
{
    int arr[3][3], sec[3][3];
    printf("enter the elements in first matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("enter the elements in second matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &sec[i][j]);
        }
    }

    printf("the product of two matrixes are");
    int product[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                product[i][j] += arr[i][k] * sec[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}

// swap using functions

#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("the number after swapping are %d %d", x, y);
}
int main()
{
    int a, b;
    printf("enter the value of a and  b");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("the number before swapping are %d %d", a, b);
    swap(a, b);
}

// search in arr using functions
#include <stdio.h>
void findele(int arr[], int target)
{
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            printf("the target found at index %d", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("not found");
    }
}
int main()
{
    int arr[5], target;
    printf("emter the elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    target = 5;
    findele(arr, target);
}

// factorial using recurssion
#include <stdio.h>
int findfact(int fact)
{
    if (fact == 0)
    {
        return 1;
    }
    return fact * findfact(fact - 1);
}
int main()
{
    int num = 5;
    int x = findfact(num);
    printf("%d", x);
}

// Fibonacci series

#include <stdio.h>
int main()
{
    int a = 0, b = 1, next, terms = 5;
    if (terms > 0)
    {
        printf("%d", a);
    }
    if (terms > 1)
    {
        printf("%d", b);
    }
    if (terms > 1)
        for (int i = 0; i < terms; i++)
        {
            int sum = a + b;
            printf("%d", sum);
            a = b;
            b = sum;
        }
}

// struct student data
#include <stdio.h>
struct Student
{
    char name[50];
    int rollnumber;
    char batch[3];
};
int main()
{
    struct Student s1;
    printf("enter the name of student");
    scanf("%s", &s1.name);
    printf("enter the roll number of student");
    scanf("%d", &s1.rollnumber);

    printf("enter the batch of student");
    scanf("%s", &s1.batch);

    printf("%s", s1.name);
    printf("%d", s1.rollnumber);
    printf("%s", s1.batch);
}

// find topper
#include <stdio.h>
#define maxstudent 2
struct student
{
    char name[50];
    int rollno;
    float marks;
};
void topper(struct student s1[], int count)
{
    int topperindex = 0;
    for (int i = 0; i < count; i++)
    {
        if (s1[i].marks > s1[topperindex].marks)
        {
            topperindex = i;
        }
    }
    printf("topper");
    printf("%s", s1[topperindex].name);
    printf("%d", s1[topperindex].rollno);
}

int main()
{
    int count = 0;
    struct student s1[maxstudent];
    printf("enter the details of student");
    for (int i = 0; i < maxstudent; i++)
    {
        scanf("%s", &s1[i].name);
        scanf("%d", &s1[i].rollno);
        scanf("%f", &s1[i].marks);
        count++;
    }
    topper(s1, count);
}

// pointers
#include <stdio.h>
int main()
{
    int num = 5;
    int *pt = &num;
    printf("the pt store the address of num that is %p", (void *)pt);
    printf("the value in the  address pt is %d", *pt);
}

// swap 2 numbers using pointers
#include <stdio.h>
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int num1 = 5, num2 = 6;
    int *pt1 = &num1;
    int *pt2 = &num2;
    swap(pt1, pt2);
    printf("after swapping%d,%d", num1, num2);
}
// contents of an array using pointers
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array contents using pointers:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

// string reverse using pointers
#include <stdio.h>
int main()
{
    char rev[50];
    int i;
    printf("enter any string");
    scanf("%s", &rev);
    for (i = 0; rev[i] != '\0'; i++)
        ;
    char *pt = rev + i - 1;
    printf("%d\n", pt);
    printf("%d", rev);

    while (pt >= rev)
    {
        printf("%c", *pt);
        pt--;
    }
}

// palindrome using pointer
#include <stdio.h>
#include <string.h>
int is_palindrome = 1;
int main()
{
    char palin1[30];
    printf("enter any string");
    scanf("%s", &palin1);
    char *pt = palin1 + strlen(palin1) - 1;
    char *start = palin1;
    while (start < pt)
    {
        if (*start != *pt)
            is_palindrome = 0;
        break;
    }
    if (is_palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}

// sort using function and pointer
#include <stdio.h>
int main()
{
    int arr[4] = {4, 5, 3, 6};
    int *pt = arr;
    int size = 4;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(pt + j) > *(pt + j + 1))
            {
                int temp = *(pt + j);
                *(pt + j) = *(pt + j + 1);
                *(pt + j + 1) = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(pt + i));
    }
    printf("\n");
}

// file (write)
#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "w");
    fprintf(file, "hellow how are you");
    fclose(file);
}

// file read
#include <stdio.h>
int main()
{
    char ch;
    FILE *file;
    int words = 0;
    ch = fgetc(file);
    file = fopen("test.txt", "r");
    while (ch != EOF)
    {
        printf("%c", ch);
    }
    printf("%d", words + 1);
    fclose(file);
}

// input name and roll number
#include <stdio.h>
int main()
{
    FILE *file;
    int rollnumber = 9;
    char name[10];

    file = fopen("data.txt", "w");
    printf("enter your name");
    scanf("%s", &name);
    fprintf(file, "%s", name);
    fprintf(file, "%d", rollnumber);
    fclose(file);
}

// read the same file
#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("data.txt", "r");
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(file);
}
