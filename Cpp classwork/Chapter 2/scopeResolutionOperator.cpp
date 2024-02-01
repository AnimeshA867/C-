#include<iostream>

using namespace std;

int x;

int main(){
     x=15;
    cout<<"Local data: "<<x<<" Global Data: "<<::x<<endl;
    {
        x=20;

    cout<<"Local data: "<<x<<" Global Data: "<<::x<<endl;

    }
    cout<<"Local data: "<<x<<" Global Data: "<<::x<<endl;

    return 0;
}