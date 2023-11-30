#include<stdio.h>
int main(){
    int i ,num;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&num);
        if(num%2==0){
        printf(" \n Is even");
        }
        else {
            printf("\n the num is odd ");
        }
    }
    // sum of 10 numbers
    int sum=0;
    for(i=1;i<=num;i++){
        if(num%2==0){
        sum=sum+i;
        }
        else{
            printf(" ");
        }
    }
    printf("sum of the even number are: %d",sum);

}