#include<iostream>
using namespace std;

int main(){
    int a=5,*ptr;

    ptr=new int;

    cout<<"Enter a new varaible:"<<endl;
    cin>>*ptr;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    delete ptr;

    cout<<*ptr<<endl;
    cout<<ptr;
}