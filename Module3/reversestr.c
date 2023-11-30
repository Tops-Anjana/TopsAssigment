#include<stdio.h>
#include<string.h>
int main(){
char str[30],temp;
int i,len;
printf("enter string:");
scanf("%s",str);
len=strlen(str)-1;
for(i=0;i<strlen(str)/2;i++){
    temp=str[i];
    str[i]=str[len];
    str[len--]=temp;

}
printf("Reverse String is :%s",str);

}