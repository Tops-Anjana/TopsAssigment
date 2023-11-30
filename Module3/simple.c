//simple interest
#include<stdio.h>
int main(){
   float si,prn,rate,time,amt;
    printf("enter the value of principal:");
    scanf("%f",&prn);
    printf("enter the value of rate:");
    scanf("%f",&rate);
    printf("enter the value of timeperiod:");
    scanf("%f",&time);
    si=(prn*rate*time)/100;
    printf("\n the simple interest is:%f",si);
    amt=prn*(1+rate*time);
    printf("\n %f is the simple interest",amt);
}