#include<stdio.h>
int main(){
int i,rem,reverse=0;
printf("enter number:");
scanf("%d",&i);
while(i!=0){
    rem=i%10;
    reverse=reverse*10+rem;
    i/=10;

}
printf(" the reversed number is :%d",reverse);
}
