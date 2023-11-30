#include<iostream>
using namespace std;
class cricketer{
    public:
    char name[50];
    int age;
    public:
     int display(){
        cout<<"Entername:";
        cin>>name;
        cout<<"age";
        cin>>age;
     }
};
class batsman :public cricketer{
     public:
     int totalrun,avgrun,match,avg;
     char perform;
     public:
     int getdata(){
        cout<<"total number of matches played:";
        cin>>match;
        cout<<"Enter total run:";
        cin>>totalrun;
     }
     int calaverage_run(){
        avg=totalrun/match;
        cout<<"average runs are :"<<avg<<endl;
     }
};
int main(){
   batsman bm;
   bm.display();
   bm.getdata();
   bm.calaverage_run();    
}