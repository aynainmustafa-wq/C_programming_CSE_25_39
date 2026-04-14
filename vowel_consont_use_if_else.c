#include <stdio.h>
int main() {
char n;
scanf("%c", &n);
printf ("Given character is : %c\n", n) ;
printf ("ASCII value of the character is : %d\n", n) ;
if(n==65||n==69||n==73||n==79||n==85) {
printf ("The character is a vowel") ;
}
else if(n==97||n==101||n==105||n==111||n==117) {
printf ("The character is a vowel") ;
}
else
printf ("The character is a consonant ") ;


return 0;
}