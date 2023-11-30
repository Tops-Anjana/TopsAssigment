#include<iostream>
using namespace std;
 class person{
    public:
    char name[20];
    int age;
    public:
    int get(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
 };
 class student:public person{
      public:
      int percent;
      public:
      int per(){
        cout<<"Enter percentage:";
        cin>>percent;
        cout<<"percentage are:"<<percent<<endl;
      }
 };
 class teacher:public person{
    public: int salary;
    public: int sal(){
        cout<<"Enter salary:";
        cin>>salary;
        cout<<"salary is:"<<salary<<endl;
    }
 };
int main(){
    student s;
    teacher t;
    s.get();
    s.per();
    t.get();
    t.sal();
 }