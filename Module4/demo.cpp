#include<iostream>
using namespace std;
class person{
  public:
    int age;
    char name[20];
    public:
    int getdata(){
        cout<<"enter name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
    }
    int display(){
        cout<<"The name of the person is:"<<name;
        cout<<"\n The age of the person is:"<<age;
    }
};
int main(){
    person p;
    p.getdata();
    p.display();
}