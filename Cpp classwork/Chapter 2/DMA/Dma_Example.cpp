#include<iostream>
#include<new>
using namespace std;

int main(){
    int i;
    int *p;
    cout<<"How many numbers to input:";
    cin>>i;
    p= new (nothrow) int[i];
    if(p==NULL){
        cout<<"Error: Memory could not be allocated.";
    }
    else{
        for(int n=0;n<i;n++){
            cout<<"Enter array element:";
            cin>>*(p+n);
        }
        for(int n=0;n<i;n++){
            cout<<*(p+n)<<endl;
        }
        delete[] p;
        cout<<"----------------------"<<endl;
        for(int n=0;n<i;n++){
            cout<<*(p+n)<<endl;
        }
    }
}