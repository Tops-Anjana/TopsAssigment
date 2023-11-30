#include<iostream>
using namespace std;
class Large{
    private:
    int x,y;
    public:
    int get(){
        cout<<"enter the values of x and y:";
        cin>>x>>y;
    }
friend int large(Large ss);// friend function.
};
int large(Large ss)
{
    if(ss.x>ss.y){
        cout<<"Maximum is x :"<<ss.x;
    }
    else{
        cout<<"maximum is y :"<<ss.y;
    }
}
int main(){
  Large ss;
  ss.get();
  large(ss);
}