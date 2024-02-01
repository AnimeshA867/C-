#include<iostream>

using namespace std;

class A{
    public:
    void display(){
        cout<<"This is from the class A."<<endl;
    }
};

class B: virtual public A{
    public:
    void display(){
        cout<<"This is from the class B."<<endl;
    }
};
class C: virtual public A{
    public:
    void display(){
        cout<<"This is from the class C."<<endl;
    }
};
class D: public B,C{
    public:
    void display(){
        cout<<"This is from the class D."<<endl;
    }
};

int main(){
    D b;
    b.display();
    b.A::display();
    
    return 0;
}