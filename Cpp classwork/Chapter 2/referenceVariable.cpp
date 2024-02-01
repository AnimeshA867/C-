//reference variable or just pointer.

#include<iostream>
using namespace std;

int main(){
    int a=5;
    int &b=a;
    cout<<b<<endl;
    b=b+10;

    cout<<a<<endl<<b<<endl<<&a<<endl<<&b;
    
    return 0;
}