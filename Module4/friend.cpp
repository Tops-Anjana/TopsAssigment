#include<iostream>
using namespace std;
class Swap{
    private:
    int x,y;
    public:
    Swap(int x,int y){
    this->x=x;
    this->y=y;
    }
    friend int swapping(Swap&);// friend function.
};
int swapping(Swap& ss)
{
  cout<<"values before swapping: "<<ss.x <<"  "<<ss.y;
   ss.x=ss.x+ss.y;
   ss.y=ss.x-ss.y;
   ss.x=ss.x-ss.y;
   cout<<"\n values after swapping: "<<ss.x<<"  "<<ss.y;
}
int main(){
  Swap ss(12,32);
  swapping(ss);
  //swapping(x,y);
}