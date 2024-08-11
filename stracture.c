#include <stdio.h>
#include <string.h>

struct student
{
    int roll_number;
    char name[50];
    float marks;
    char grad;
}; // semicolon

int main() {
    struct student s;
    s.roll_number = 12;
    strcpy(s.name, "suhail");
    s.marks = 30;
    s.grad = 'A';
    printf("%d %s %f %c\n", s.roll_number, s.name, s.marks, s.grad);
    return 0; 
}
