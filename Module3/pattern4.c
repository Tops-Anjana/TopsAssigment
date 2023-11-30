#include<stdio.h>
int main(){
    int i,j,r=5;
    for(i=0;i<=r;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
        for(i=r-1;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("* ");
            }
         printf("\n");
        }
}