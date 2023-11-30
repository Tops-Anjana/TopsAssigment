#include<stdio.h>
int main(){
    int i,len=0;
    char str[50];
    printf("enter a string:\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
printf("\n length of string %d",len);
}