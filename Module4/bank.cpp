#include<iostream>
using namespace std;
class BankAcc{
    public:
     char name[50],type_Acc[30];
     long int accno,balance,amt;
    public:
     int get(){
        cout<<"Enter the Account holder Name: ";
        cin>>name;
        cout<<"Enter the Account Type: ";
        cin>>type_Acc;
        cout<<"Enter the Account number: ";
        cin>>accno;
        cout<<"Enter the Balance: ";
        cin>>balance;
     }
      int deposit(){
          cout<<"Enter the Amount to deposit:";
          cin>>amt;
           balance=balance+amt;
}
      int withdraw(){
        cout<<"the total balance is:"<<balance;
        cout<<"how much to withdraw:"<<amt;
        balance=balance-amt;
 }
      int display(){
        cout<<"The name of Account holder is:"<<name<<endl;
        cout<<"The balance is:"<<balance<<endl;
      }
};
int main(){
   BankAcc ba;
   cout<<"Information"<<endl;
   ba.get();
   ba.display();
  ba.deposit();
  ba.display();
  ba.withdraw();
  ba.display();
}