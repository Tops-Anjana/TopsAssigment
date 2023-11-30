#include<stdio.h>
int maxfun(int a[],int n);
int main(){
    int i,ar[5],size,index;
    printf("\n enter size:");
    scanf("%d",&size);
    printf("\n enter array elements:");
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
        index=maxfun(ar,size);
       
    }  
     printf("\n the maximum number is:%d",index);      

}
int maxfun(int a[],int n){
    int i,max,index;
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            index=i;
        }
    }
    printf("%d",index);

}