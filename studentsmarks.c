
          
          
#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    printf("The marks are a:%d, b:%d and c:%d\n",a,b,c);
    if (a<33 || b<33|| c<33){
        printf("You have failed due to less individual percentage");
    }
    else if (((a+b+c)/3)<40){
        printf("You have failed due to less overall percentage");
    }
    else {
        printf("You have passed");
    }
    return 0;
}
