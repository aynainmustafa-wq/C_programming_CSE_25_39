#include <stdio.h>
int main(){
    printf("Enter value of n : ");
    int n;
    int sum =0;
    scanf("%d",&n);
    printf("The value of n that you entered is : %d\n",n);
    for(int i =0;i<=n;i+=2){
        sum += i;
    }
    printf("Sum of even numbers between 1 and %d is %d",n,sum);
    return 0;
}
