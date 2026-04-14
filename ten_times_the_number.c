#include<stdio.h>
void ten_times_value(int*a) {

*a = *a*10;

}
int main () {
int i;
printf("The given number is : ") ;
scanf("%d", &i) ;
ten_times_value(&i) ;
printf (" The new value of the number is : %d ", i);
return 0;
}
