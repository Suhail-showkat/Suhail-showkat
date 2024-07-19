#include <stdio.h>

int search(int[], int, int);

int main() {
    int a[50], n, x, d, i;
    printf("Enter the size of the integer array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number you want to search: ");
    scanf("%d", &x);

    d = search(a, n, x);
    if (d == -1)
        printf("NOT FOUND\n");
    else
        printf("Found at %d\n", d);

    return 0;
}

int search(int a[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (x == a[i]) {
            return i + 1;
        }
    }
    return -1;
}
