// fibonacci series
#include<stdio.h>
int main(){
  int i,num,t1=0,t2=1,nt;
  nt=t1+t2;
  printf("Enter any number:");
  scanf("%d",&num);
    printf("the fibonacci series of given number is:%d,%d",t1,t2);
     for(i=nt;i<num;i++){
        printf("%d",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
     }
          
}
