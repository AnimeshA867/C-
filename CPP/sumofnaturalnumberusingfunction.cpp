#include<iostream>
#include<conio.h>
using namespace std;
int sum(int n){
    int s=n;
    if(n<=0){
    return 0;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter a number to find sum:";
    cin>>a;
    int b=sum(a);
    cout<<b;
}