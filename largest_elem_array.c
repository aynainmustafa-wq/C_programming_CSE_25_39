#include <stdio.h>

int main() {
    int obj[6] = {78, 44, 52, 61, 49, 77};
    int n = 6;
    int max = obj[0];

    for (int i = 1; i < n; i++) {
        if (obj[i] > max) {
            max = obj[i];
        }
    }

    printf("Largest number is %d", max);
    return 0;
}