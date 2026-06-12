//check for palindrome
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool palind(char str[]){
    int left = 0;
    int right = strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
int main() {
    char word[100];
    printf("Enter your word : ");
    scanf("%s",word);
    printf("The word that you entered was : %s\n",word);
    if(palind(word)){
        printf("%s is a palindrome",word);
    }
    else{
        printf("%s is not a palindrome",word);
    }
    return 0;
}
