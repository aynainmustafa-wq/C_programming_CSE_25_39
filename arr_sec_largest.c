#include <stdio.h>
int main() {
    int arr[] = {30, 15, 25, 40, 20};
    int n = 5, max = arr[0], sec = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) { sec = max; max = arr[i]; }
        else if (arr[i] > sec && arr[i] != max) sec = arr[i];
    }
    printf("Second largest: %d\n", sec);  
    return 0;
    }
