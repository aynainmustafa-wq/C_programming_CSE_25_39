#include <stdio.h>
int main() {
    int arr[] = {5, 10, 15, 20, 25, 10, 30, 25};
    int n = 8;
    printf("Duplicates: ");
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");  // Output: 10 25
    return 0;
}
