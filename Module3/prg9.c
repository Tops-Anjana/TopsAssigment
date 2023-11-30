#include<stdio.h>
int main(){
 int r,c,k,n=5;
 for(r=0;r<=5;r++){
    for(c=0;c<=(n-r)-1;c++)
    {
        printf(" ");
    }
    for(k=0;k<=r+1;k++){
        printf("* ");
    }
    printf("\n");
 }
}