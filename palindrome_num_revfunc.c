#include <stdio.h>
#include <stdbool.h>
bool palindrome(int x){
    if(x<0){
        return false;
    }
    if(x<10){
        return true;
    }
    if (x%10==0){
        return false;
    }
    int reversehalf = 0;
    while(x>reversehalf){
        reversehalf = reversehalf*10 + x%10;
        x/=10;
    }
    return x==reversehalf || x==reversehalf/10;
}
int main(){
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    printf("Your number is %d\n",num);
    if(palindrome(num)){
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
    return 0;
}
