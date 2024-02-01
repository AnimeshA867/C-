#include<iostream>

using namespace std;

class A{
    public:
    virtual  ~A(){
        cout<<"~A Base"<<endl;
    }
};

class B:public A{
    public:
  ~B(){
        cout<<"~A Derived"<<endl;
    }
};
class C{
    public:
   virtual   ~C(){
        cout<<"~C Base "<<endl;
    }
};

class D: public C{
    public:
   ~D(){
        cout<<"~C Derived"<<endl;
    }
};

int main(){
    A *a= new B;
    C *c = new D;

    delete a;
    delete c;


 return 0;
}