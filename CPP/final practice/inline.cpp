#include<iostream>
using namespace std;

inline int cube(int n){
    return n*n*n;
}

int main(){
    int n=3;

    cout<<cube(n)<<endl;
    
    return 0;
}