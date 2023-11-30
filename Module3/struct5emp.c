#include<stdio.h>
#include<string.h>
struct emp{
    int empno,age;
    char empname[30],add[100];
}e[5];
int main(){
  int i;
  for(i=0;i<5;i++){
    e[i].empno=i+1;
    printf("\n Employee no is:%d \n",e[i].empno);
    printf("Enter name:");
    scanf("%s",&e[i].empname);
      printf("Enter age:");
    scanf("%d",&e[i].age);
      printf("Enter address:");
    scanf("%s",&e[i].add);
  }
  // displaying information
  for(i=0;i<5;i++){
  printf("\n \n \n Employee Information");
  printf("\n The empid is:%d",e[i].empno);
  printf("\n The emp name is:%s",e[i].empname);
  printf("\n The emp age is:%d",e[i].age);
  printf("\n The emp address is:%s",e[i].add);
}
}