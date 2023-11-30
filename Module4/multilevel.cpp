#include<iostream>
using namespace std;
class students{
    public:
    int rollno;
    public:
    int get(){
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"rollno is:"<<rollno<<endl;
    }
};
class test:public students{
    public:
    int marks,eng,math;
    public:
    int mar(){
        cout<<"Enter the marks of english:";
        cin>>eng;
        cout<<"Enter the marks of maths:";
        cin>>math;
    }
};
class result:public test{
    public:
    int totalmarks;
    public:
    int total(){
        totalmarks=eng+math;
        cout<<"the total marks are:"<<totalmarks<<endl;
    }
};
int main(){
  students s;
  result r;
  s.get();
  r.mar();
  r.total();  
}