#include<stdio.h>
#include<string.h>
int main(){
char str[30];
int i,len,flag=0;
printf("enter string:");
scanf("%s",str);
len=strlen(str);
for(i=0;i<len/2;i++){
    if(str[i]!=str[len-i-1])
{
    flag=1;
    break;
} 
}
if(flag){
    printf("%s is not a plaindrome \n",str);
}
else{
    printf("%s is a plaindrome \n",str);
}
}
