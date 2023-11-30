#include<stdio.h>
int main(){
 int i,a[5],sum=0;
  printf("enter number:");
 for(i=1;i<=4;i++)
 {
   
    scanf("%d",&a[i]);
 }
 for(i=1;i<=4;i++)
 {
    sum=sum+a[i];
 }
 printf("the sum number is:%d",sum);
}