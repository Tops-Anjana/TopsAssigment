#include<iostream>
using namespace std;
class overload{
    public:
    int sum;
    public:
    overload(){}
    overload(int a){
       sum=a;
    }
    int operator+(overload);
    //int display();
};
int overload::operator+(overload ov)
{   int m=sum+ov.sum;
    cout<<"the addition of matrix is:"<<m;
}
int main()
{
    int ar1[5]={5,6,9,11,18};
    int ar2[5]={1,2,3,4,5};
    
 overload ov;
 ar1[5]+ar2[5];
}