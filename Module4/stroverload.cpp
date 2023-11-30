#include<iostream>
#include<string.h>
using namespace std;
class stroverload{
    public:
    char a[10],b[10];

    public:
    stroverload(char s1[], char s2[]){
       strcpy(this->a,s1);
       strcpy(this->b,s2);
    }
    void operator+(){
        cout<<"concatenation of two string is:"<<strcat(a,b);
    }
};
int main()
{
    char s1[10];
    char s2[10];
    cout<<"Enter string1:";
    cin>>s1;
    cout<<"enter string2:";
    cin>>s2;
    stroverload ov(s1,s2);
    +ov;
}