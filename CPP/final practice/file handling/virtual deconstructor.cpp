#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Hey jude."<<endl;
    }

    ~A(){
        cout<<"Lalalalalalalalalallalaa"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"Hey soul sister."<<endl;
    }
    ~B(){
        cout<<"There mister mister on the radio the sterio."<<endl;
    }
};

int main(){
    A* a=new B;
    delete a;
    return 0;
}