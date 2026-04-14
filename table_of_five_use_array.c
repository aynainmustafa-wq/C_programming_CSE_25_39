#include <stdio.h>
int main() {
int arr[10];
int i;
for(i=0;i<=9;i++) {
arr[i]=5*(i+1) ;
printf("5 × %d = %d\n", (i+1), arr[i]);
}
return 0;
}
    