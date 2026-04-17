#include <stdio.h>
#include <math.h>

int main() {
    float n;
    printf("Enter number : ");
    scanf("%f", &n);

    for (float i = 1; i <= 5; i++) {
        float square = pow(n, i);
        printf("Square number : %f\n", square);
    }

    return 0;
}