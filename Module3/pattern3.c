#include<stdio.h>
int main(){
    int i,j,k,r=5;
    for(i=0;i<=r;i++){
        for(j=0;j<=2*(r-i)-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++)
        {
            printf("* ");
        }
     printf("\n");
    }
}
