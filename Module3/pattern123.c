#include<stdio.h>
int main(){
    int i,j,r=5,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
     printf("\n");
    }
}