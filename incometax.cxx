#include <stdio.h>
#include <math.h>
int main (){
    float a;
    printf("Your income is : ");
    scanf("%f",&a);
    if (a<250000){
        printf("You have to pay no income tax");
    }
    else if (a>=250000 && a<500000){
        printf("Your payable income tax is %f",(5.0/100.0)*a);
    }
    else if (a>=500000 && a<1000000){
        printf("Your payable income tax is %f",(20.0/100.0)*a);
    }
    else{
        printf("Your payable income tax is %f",(30.0/100.0)*a);
    }
        
          
    return 0;
}