#include<iostream>
#include <typeinfo>
#include <exception>
using namespace std;
int main(){
    int a;
try{

    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    // if()
    // throw bad_typeid;
}
catch(bad_typeid&){
    cout<<"Some exception was caught during runtime."<<endl;
}

 return 0;
}