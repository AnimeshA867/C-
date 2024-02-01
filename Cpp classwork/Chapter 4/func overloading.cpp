#include<iostream>
using namespace std;

int sum(int a, int b=5){
    return a+b;
}
float sum(float a){
    return a;
}

int main(){
    int a=10;

    cout<<sum(a);
}