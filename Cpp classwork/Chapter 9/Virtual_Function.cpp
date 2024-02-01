/*
Virtual function
*/

#include<iostream>
using namespace std;

class base{
    public:


 virtual void display(){
        cout<<"This is from the base class."<<endl;
    }
};

class derived: public base{

    public:

    void display(){
        cout<<"This is from the derived class."<<endl;
    }
};

int main(){
    base b, *bptr;
    derived d;
    bptr=&d;
    bptr->display();

    return 0;
}