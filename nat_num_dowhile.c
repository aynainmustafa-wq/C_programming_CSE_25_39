#include <stdio.h>
#include <math.h>
int main(){
    int n,i = 1;
    printf("Enter value of n : ") ;
    scanf("%d", &n);
    do{
    printf("%d\n", i ) ;
    i++;
    }
    while(i<=n) ;
    
    return 0;
}