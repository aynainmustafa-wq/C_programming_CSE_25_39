#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d;
    printf("Given numbers are ");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if (a>b && a>c && a>d){
        printf("The greatest number is %f\n",a);
    }
    else if (b>a && b>c && b>d){
        printf("The greatest number is %f\n",b);
    }
    else if (c>a && c>b && c>d){
        printf("The greatest number is %f\n",c);
    }
    else {
        printf("The greatest number is %f\n",d);
    }
    return 0;
}