
#include<stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    
    int size = 6;
    int position = 0;
    
    printf("Your array is : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    size--;
    
    printf("\nThe new array is : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}