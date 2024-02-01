#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[10],n=-1000,c;
    for(int i=0;i<10;i++){
        cout<<"Enter a number:"<<endl;
        cin>>a[i];
    }
    c=n;
    for(int i=0;i<10;i++){
        if(a[i]>c){
            c=a[i]; 
        }
    }
    cout<<c;
}