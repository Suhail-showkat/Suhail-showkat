#include <stdio.h>

int main() {
    printf("Studytonight - Best place to learn\n");

    int n;
    float sum = 0, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%f", &x);
        sum += x;
    }

    float average = sum / n;
    printf("Average of the entered numbers is = %f\n", average);

    return 0;
}
 