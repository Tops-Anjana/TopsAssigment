#include<stdio.h>
int fact1(int num);

int main(){
  int num;
  printf("Enter any number:");
  scanf("%d",&num);
      printf("the factorial of given number is%d:%d",num,fact1(num));    
}
int fact1(int num){
if(num>=1)
{
    return num*fact1(num-1);
}
else{
  return 1;
}
}