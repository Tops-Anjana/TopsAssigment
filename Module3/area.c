// area of circle,rectangle,traingle
#include<stdio.h>
int main(){
    int r,l,h,b,rh;
    float areacr ,tri,rect;
    printf ("enter the value of radius:");
    scanf("%d",&r);
    areacr=3.14*r*r;
    printf("the area of circle is:%f",areacr);
    printf("\n enter the value of length and width:");
    scanf("%d %d ",&b,&h);
    tri=0.5*b*h;
    printf("\n the area of trianle is:%f",tri);
    printf("\n enter the value of length and height:");
    scanf("%d %d",&l,&rh);
    rect=l*rh;
    printf("\n the area of rectangle is:%f",rect);

}