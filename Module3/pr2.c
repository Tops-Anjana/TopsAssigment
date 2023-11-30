// simple calculator
#include<stdio.h>
int main(){
  float num1,num2,res=0;
  char opr;
  printf("enter any one operator like(+,-,/,*):");
  scanf("%c",&opr);
  printf("enter the values of num1 and num2:");
  scanf("%f %f",&num1,&num2);
  switch (opr)
  {
  case'+': 
      res=num1+num2;
      printf("the result is:%f",res);
    break;
  case'-': 
      res=num1-num2; 
      printf("the result is:%f",res);
    break;
    case'*': 
      res=num1*num2; 
      printf("the result is:%f",res);
    break;
    case'/': 
      res=num1/num2; 
      printf("the result is:%f",res);
    break;
  default:
     printf("invalid operator");
    break;
  }
}