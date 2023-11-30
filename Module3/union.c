#include<stdio.h>
#include<string.h>
union jb{
    char name[30];
    float salary;
    int jid;
}ujb;
struct sjob{
    int sid;
    char name[30];
    float salary;
}sjb;
int main(){
   printf("size of union=%d",sizeof(ujb));
   printf("\n size of structure is =%d",sizeof(sjb));
}