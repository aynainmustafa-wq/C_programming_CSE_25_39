#include <stdio.h>

int main() {
    int marks[5] = {56, 78, 54, 95, 88};
    int n = 5;
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = marks[i];
        marks[i] = marks[n - 1 - i];
        marks[n - 1 - i] = temp;
    }

    printf("Reversed array is : ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", marks[i]);
    }

    return 0;
}     