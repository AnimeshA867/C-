/*
    In CPP, it is possible to point the address of the member function that is derived from the base class with the base pointer. This is done by passing the address of the derived object to the base pointer and the base pointer is used to call the overridded member function with the help of arrow function.
*/

#include<iostream>
using namespace std;

class Base{
    public:
  virtual  void display(){
        cout<<"This is the base class"<<endl;

    }

};

class Child:public Base{
    public:
    void display(){
        cout<<"This is the child class"<<endl;
    }

    void print(){
        cout<<"This is the print function of the child class"<<endl;
    }
};

int main(){
    Base b,*ptr;
    Child c;

    ptr=&c;

    ptr->display();


}

