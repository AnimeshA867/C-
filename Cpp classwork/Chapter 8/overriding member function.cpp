#include<iostream>

using namespace std;

class A{
    public:
    void display(){
        cout<<"This is from the class A."<<endl;
    }
};

class B: public A{
    public:
    void display(){
        cout<<"This is from the class B."<<endl;
    }
};

int main(){
    B b;
    b.display();
    b.A::display();
    
    return 0;
}