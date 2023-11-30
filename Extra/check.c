#include<stdio.h>
int main(){
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90){
        printf("character is in Upper case.");
    }
    else if(ch>=97 && ch<=122){
        printf("character is in Lower case.");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("its a Digit.");
    }
    else if(ch>=33 && ch<=47){
        printf("Its a Special character.");
    }
    else if(ch>=58 && ch<=64){
        printf("its a Special character.");
    }
    else if(ch>=92 && ch<=96){
        printf("its a Special character.");
    }
    else{
        printf("incorect");
    }

}