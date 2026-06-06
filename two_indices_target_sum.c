#include <stdio.h>
int main(){
    int nums[]={11,4,5,3};
    int target = 8;
    for(int j = 0;j<4;j++){
        for(int i=j+1;i<4;i++){
            if((nums[j]+nums[i])==target){
                printf("%d %d ",j,i);
            }
        }
    }

    return 0;
}
