#include <stdio.h>

int main() {
    int num, even_sum = 0, odd_sum = 0;

    printf("Please enter 10 integers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }

    printf("\nSum of even numbers: %d", even_sum);
    printf("\nSum of odd numbers: %d\n", odd_sum);

    return 0;
}