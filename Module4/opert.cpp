#include<iostream>
using namespace std;
class operate{
    public:
      int a,b,s,d,m,c;
    public:
       operate(){
    cout<<"the values are:"<<endl;
    cout<<"Enter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
}
     int add(){
        s=a+b;
        cout<<"the addition are:"<<s<<endl;
    }
    int sub(){
        c=a-b;
         cout<<"the subtraction are:"<<c<<endl;
    }
    int mul(){
        m=a*b;
         cout<<"the product are:"<<m<<endl;
    }
    int div(){
        d=a/b;
         cout<<"the division  are:"<<d<<endl;
    }
 
};
int main()
{    
    operate ob1;
    ob1.add();
   ob1.sub();
    ob1.mul();
    ob1.div();
} 