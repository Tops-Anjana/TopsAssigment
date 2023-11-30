#include<iostream>
using namespace std;
class shape{
    public:
    int area(int len,int brth){
        int area1;
        area1=len*brth;
        cout<<"The area of rectangle is:"<<area1<<endl;
    }
    int area(double len,double brth){
        int ar2;
        ar2=0.5*len*brth;
        cout<<"the area of triangle is: "<<ar2<<endl;

    }
    int area(int len){
        int ar3;
        ar3=3.14*len*len;
        cout<<"the area of circle is: "<<ar3<<endl;
    }
};
int main(){
    shape s;
 s.area(5,6);
 s.area(12.3,3.3);
 s.area(5);
}