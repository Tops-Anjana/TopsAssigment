// swapping
#include<stdio.h>
int main(){
    int x=7,y=8;
    printf("the value of x and y is %d %d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n the value of x and y is:%d %d",x,y);
}