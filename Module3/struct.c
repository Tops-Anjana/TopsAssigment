#include<stdio.h>
#include<string.h>
struct emp{
    int empno,age;
    char empname[30],add[100];
};
int main(){
  struct emp e1;
  e1.empno=1;
  strcpy(e1.empname ,"tops");
  e1.age=50;
  strcpy(e1.add ,"surat");
  printf("Employee Information");
  printf("\n The empid is:%d",e1.empno);
  printf("\n The emp name is:%s",e1.empname);
  printf("\n The emp age is:%d",e1.age);
  printf("\n The emp address is:%s",e1.add);
}