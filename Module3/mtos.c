// using switch case monday to sunday
#include<stdio.h>
int main(){
 int c;
 printf("enter the case:");
scanf("%d",&c);
switch (c)
{
case 1:
      printf("this is Monday");
    break;
case 2:
      printf("this is Tuesday");
    break;
case 3:
      printf("this is Wednesday");
    break;
case 4:
      printf("this is Thrusday");
    break;
case 5:
      printf("this is Friday");
    break;
case 6:
      printf("this is Saturday");
    break;
case 7:
      printf("this is Sunday");
    break;
default:
       printf("this is invalid choice");
    break;
}
}