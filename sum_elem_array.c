//to find sum of elements of an array
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6};
    for(int i = 0;i<=5;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    printf("Sum of the elements of the given array is : %d",arr[5]);
    return 0;
}
