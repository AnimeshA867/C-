#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter the value of a and b:";
    cin>>a>>b;

    try{
        if(b==0){
            throw a;
        }
        if(b==0){
            throw b;
        }
        cout<<a/b<<endl;
    }catch(...){
        cout<<"Nothing much just checking whether the program runs or not. HEHE"<<endl;
    }
    return 0;
}