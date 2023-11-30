#include<iostream>
using namespace std;
inline int cube(int s)
    {
        return s*s*s;
    }
inline int mul(int a, int b)
   {
    return a*b;
   }    
int main(){
    int n,a,b;
    cout<<"enter the number:";
    cin>>n;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
   cout<<"cube is  :"<<cube(n)<<endl;    
   cout<<"multiplying 2 values a and b  :"<<mul(a,b)<<endl;
}