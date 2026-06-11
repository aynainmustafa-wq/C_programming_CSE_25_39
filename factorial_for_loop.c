#include <stdio.h>
int main(){
    int num;
    printf("Enter the number you want the factorial of : ");
    scanf("%d",&num);
    printf("The number that you entered is : %d\n",num);
    int fact = 1;
    for(int i=1; i<=num;i++){
        fact = fact*i;
    }
    printf("The factorial of the given number is : %d",fact);

    return 0;
}
