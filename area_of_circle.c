#include <stdio.h>
#include <math.h>
int main (){
float radius;
printf("Enter radius : \n");
scanf("%f",&radius);
printf("The given radius is : %f\n",radius);
float area = 3.141593*radius*radius;
printf("The area of the given circle will be : %f\n",area);

return 0;
}