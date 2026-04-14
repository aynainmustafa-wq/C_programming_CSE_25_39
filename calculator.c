#include <stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("The two integers are : %d , %d\n",a,b);
int sum = a+b;
int difference = a-b;
int product = a*b;
int quotient = a/b;
printf("Sum = %d\n",sum);
printf("Difference = %d\n", difference);
printf("Product = %d\n",product);
printf("Quotient = %d\n",quotient);
return 0;
}