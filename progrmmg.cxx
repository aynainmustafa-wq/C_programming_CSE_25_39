
#include <stdio.h>
#include<math.h>
int main(){
         int a;
         scanf("%d",&a);
         printf("Your order number is : %d\n", a);
         switch(a){
             case 10 :
             printf("You want a pizza\n");
             break;
             case 11 :
             printf("You want a burger\n");
             break;
             case 12 :
             printf("You want a soft drink\n");
             break;
             case 13 :
             printf("You want chowmein\n");
             break;
             default :
             printf("You don\'t want anything");
         }
    return 0;
}