#include<stdio.h>
int main(){
 int i,frt,lst,sum=0;
  printf("enter number:");
  scanf("%d",&i);
  lst=i%10;
  while(i>=10){
    i=i/10;
  }
  frt=i;
sum=frt+lst;
 printf("the sum of first and last digit are:%d",sum);
}