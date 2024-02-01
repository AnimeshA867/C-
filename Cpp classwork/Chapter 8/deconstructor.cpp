/*
Here I'm going to explore the concept of destructors.
*/

#include<iostream>

using namespace std;

class A{
    public:
    A(){
        cout<<"The constructor of class A has been called."<<endl;
    }
    ~A(){
        cout<<"The constructor of class A has been recalled."<<endl;
    }
};

class B: A{
    public:
    B(){
        cout<<"The constructor of class B has been called."<<endl;
    }
    ~B(){
        cout<<"The constructor of class B has been recalled."<<endl;
    }
};
class C: B{
    public:
    C(){
        cout<<"The constructor of class C has been called."<<endl;
    }
    ~C(){
        cout<<"The constructor of class C has been recalled."<<endl;
    }
};

class D: C{
    public:
    D(){
        cout<<"The constructor of class D has been called."<<endl;
    }
    ~D(){
        cout<<"The constructor of class D has been recalled."<<endl;
    }
};

int main(){
    D d;
    return 0;
}