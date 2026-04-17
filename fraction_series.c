#include <stdio.h>

int main() {
    int n;
    float i;
    printf("Value of n = ");
    scanf("%d", &n);
    float sum = 0;

    for (i = 1; i <= n; i++) {
        sum = sum + 1.0 / i;
    }

    printf("Sum of first %d fractions = %f\n", n, sum);
    return 0;
}