//This is a program to illustrate the use of constructor when the constructor on the base class has arguments.

#include<iostream>
using namespace std;

class base{
    int a,b;

    public:
    // base(){
    //     a=b=0;
    // }
    base(int a, int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a: "<<a<<"b: "<<b<<endl;
    }
};
class derived:public base{
    int a,b;

    public:
    // derived(){
    //     a=b=0;
    // }
    // derived(int a, int b):base(a,b){
    //     this->a=a;
    //     this->b=b;
    // }
    void display(){
        base::display();
        cout<<"Of the derived class"<<endl;
        cout<<"a: "<<a<<"b: "<<b<<endl;
    }
};

int main(){
    derived d;
    d.display();
    return 0;
}