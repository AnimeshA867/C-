#include<iostream>
using namespace std;

void outerfunction(int x){
    void innerfunction(int y){
        cout<<"inner function "<<y<<endl;
        cout<<"outer function "<<x<<endl;
    }
    innerfunction(x);
}

int  main() {
    outerfunction(1);
    return 0;
}
