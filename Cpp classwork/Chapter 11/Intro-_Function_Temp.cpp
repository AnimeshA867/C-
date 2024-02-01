#include<iostream>

using namespace std;

template <class T,class T2>
T2 getmax(T a, T2 b){
    T2 result;
    result =(a>b)?a:b;
    return (result);
}


int main(){
    cout<<getmax(12,13)<<endl;
    cout<<getmax(123.23,13.223)<<endl;
    cout<<getmax(12,'a')<<endl;
    


 return 0;
}