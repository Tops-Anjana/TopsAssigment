#include<stdio.h>
int main(){
    int r,c;
    for(r=0;r<=5;r++){
        for(c=0;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
    for(r=1;r<=5;r++){
        for(c=1;c<=r;c++){
            printf("");
            for(int k=1;k<5-r;k++){
            printf("*");
            }
            }
        printf("\n");    
    }
}