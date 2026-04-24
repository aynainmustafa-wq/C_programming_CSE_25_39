
#include <stdio.h>

int main() {
    int obj[] = {3, 2, 5, 6, 1, 4};
    int n = 6;
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (obj[j] > obj[j + 1]) {
                temp = obj[j];
                obj[j] = obj[j + 1];
                obj[j + 1] = temp;
            }
        }
    }

    printf("Sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", obj[i]);
    }

    return 0;
}
   