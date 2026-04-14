#include <stdio.h>
#include <math.h>
int main() {
    int i = 0;
    int n;
    scanf("%d", &n);
    printf("Value of n is %d\n", n);
    printf("First n even numbers are : ") ;
    while(i<=2*n) {
    
    printf("%d\n", i) ;
   i = i+2;
    }
    
    
    return 0;
}