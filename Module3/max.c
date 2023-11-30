#include<stdio.h>
int main(){
 int i,a[5],max=0;
  printf("enter number:");
 for(i=1;i<=4;i++)
 {
   
    scanf("%d",&a[i]);
 }
 for(i=1;i<=4;i++)
 {
    if(a[i]>max){
        max=a[i];   
    }

 }
 printf("the max number is:%d",max);
}