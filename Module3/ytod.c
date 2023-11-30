// converting years to days and days to years
#include<stdio.h>
int main(){
    float yrs,dys,res,days,mth,y;
    printf("enter the years:");
    scanf("%f",&yrs);
    res=yrs*12;
    dys=res*30;
    printf("\n the no of days are:%f days",dys);
    /*
    */
   printf("\n enter the no of days:");
   scanf("%f",&days);
   mth=days/30;
   y=mth/12;
   printf("\n the years are:%f years ",y);
}