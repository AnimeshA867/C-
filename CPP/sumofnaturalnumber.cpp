#include<iostream>
#include<conio.h>
using namespace std;
void sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
sum+=i;
    }
    cout<<sum<<" is the sum of the natural numbers upto "<<n;
}

int main(){
int a;
cout<<"Enter a number:";
cin>>a;
sum(a);
}