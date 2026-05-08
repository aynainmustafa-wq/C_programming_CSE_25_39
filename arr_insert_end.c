
//insertion of an element at end of array
#include <stdio.h>
int main() {
    int arr[6]={1,2,3,4,5,6};
    int size = 6;
    int element;
    printf("Enter element you want to insert :");
    scanf("%d",&element);
    int position = 4;
    for(int i=size; i<position;i++) {

        arr[i]=arr[i-1];
    }

    arr[position]=element;
    size++;
    printf("The new array is :");
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);

    }

    return 0;
}