#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(NULL));
printf("Welcome to rock-paper-scissors.\n");
printf("For rock, enter 1. For paper, enter 2. For scissors, enter 3.\n");
int num;
scanf("%d",&num);
if(num==1){
printf("You entered rock.\n");
}
else if(num==2){
printf("You entered paper.\n");
}

else if(num==3){
printf("You entered scissors.\n");
}
else{
printf("You entered an invalid code. Please refresh & enter a valid move .\n");
}
int comp = (rand() % 3) + 1;
if(num==1 || num==2 || num==3){
if(comp==1){
printf("Computer entered rock.\n");
}

else if(comp==2){
printf("Computer entered paper.\n");
}
else{
printf("Computer entered scissors.\n");
}
}
if(num==1 && comp==2){
    printf("Computer wins!");
}
else if(num==2 && comp==3){
    printf("Computer wins!");
}
else if(num==3 && comp==1){
    printf("Computer wins!");
}
else if(num==comp){
    printf("The game is tied, please refresh and play again!");
}
else if(num!=1 || num!=2 || num!=3){
    printf(NULL);
}

else{
    printf("You win!");
}
return 0;
}
