#include<iostream>
using namespace std;

class A{
    int x;

    public:
    A(){
        cout<<"Defaults constructor called."<<endl;
    }
    A(int x){
        this->x=x;
        cout<<"Parameterized constructor called."<<endl;
    }
    A(const A& a){
        this->x=a.x;
    }

    void display(){
        cout<<x<<endl;
    }
};

int main(){
    A a(12), b(a);
    a.display();
    b.display();
    
    return 0;
}