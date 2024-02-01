#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the salary of a person:"<<endl;
    cin>>a;
    if(a<250000){
        cout<<"No tax needed.";
    }
    else if(a>=250000&&a<500000){
        cout<<"5% tax is required";
    }
    else if(a>=500000&&a<1000000){
        cout<<"7% tax is required.";
    }
    else{
        cout<<"10% tax is required.";
    }


}