#include<iostream>
#include<conio.h>
using namespace std;
 int fact(int n){
    if(n==0){
    return 1;
    }else{
    return n*fact(n-1);
    }
}
int main(){
int a;
cout<<"Enter a number to find the factorial:";
cin>>a;
int b=fact(a);
cout<<b;
}