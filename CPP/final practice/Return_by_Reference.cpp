#include<iostream>
using namespace std;

int& big(int &a, int &b){
    return (a>b)?a:b;
}

int main(){
    int a=10,b=23;
    big(a,b)=12;
    cout<<a<<" "<<b<<endl;
    
    return 0;
}