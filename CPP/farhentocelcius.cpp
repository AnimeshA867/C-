#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter the value of temperature in farhenheit:"<<endl;
    cin>>f;
    c=(5*(f-32))/9;
    cout<<"The value of temperature in celcius is "<<c;
}