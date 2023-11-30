// swapping 2 values using templates
#include<iostream>
#include<vector>
using namespace std;
template<typename t>
t sort_fun(t arr[],t n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                t temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
}
template<typename t>
int printarray(t arr[],t n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        //cout<<"\n";
    }
}
int main(){
 int arr[]={32,52,41,31,25};
 int n=sizeof(arr)/sizeof(int);
 cout<<"before array sorting:"<<endl;
 printarray(arr,n);
 sort_fun(arr,n);
 cout<<"\n After sorting array:"<<endl;
 printarray(arr,n);
}