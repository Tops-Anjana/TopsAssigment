#include<iostream>
using namespace std;
class operation{
    public:
    float a,b;
    public:
     float get(){
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
     }
     float add()
      {
        return a+b;
      }
     float sub(){
        return a-b;
     }
     float mul(){
        return a*b;
     }
     float div(){
        if(b==0){
            cout<<"dividsion by zero"<<endl;
            return 0;
        }
        else{
            return a/b;
        }
     }
};
int main(){
   int ch;
   operation o;
   cout<<"Enter 1 to Addition:";
   cout<<"\n enter 2 for Subtraction:";
   cout<<"\n Enter 3 for Multiplication:";
   cout<<"\n Enter 4 for Division:";
   o.get();
   do{
    cout<<"Enter choice:";
    cin>>ch;
       switch(ch){
        case 1:    
               cout<<"the result of addition is:"<<o.add()<<endl;
            break;
        case 2:
            cout<<"the subtraction value is:"<<o.sub()<<endl;
            break;
        case 3:
            cout<<"the multiplication value is:"<<o.mul()<<endl;
            break;
        case 4:
              cout<<"the division value is:"<<o.div()<<endl;
            
            break;                   
        default:
          cout<<"Invalid choice......."<<endl;
        break;
       }
       }while(ch>=1 &&ch<=4);
}