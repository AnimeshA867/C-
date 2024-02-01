#include<iostream>
#include<iomanip>
using namespace std;

inline void sum(int a,int b);

int main(){
    int a,b;
    cout<<"Enter any two variables:";
    cin>>a>>b;
    sum(a,b);
    
    return 0;
}


inline void sum(int a,int b){
    cout<<"The sum of two numbers "<<a<<" and "<<b<<" is "<< a+b<<endl;
}