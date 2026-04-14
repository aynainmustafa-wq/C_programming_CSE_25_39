#include <stdio.h>
void swap (int* a, int* b) {
int temp;
temp = *a;
*a = *b;
*b = temp;

}
int main() {
int a, b;
printf("The two numbers are :  ") ;
scanf("%d%d", &a, &b) ;
swap (&a, &b) ;
printf ("The swapped values of a and b are : %d,%d",a,b) ;
//printf(" The swapped values are : %d, %d", swap(&a, &b) ;
//the above would be wrong, because swap returns void, and not any 
//type of value, hence you cannot print the output of the swap function
return 0;
}