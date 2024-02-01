/*
This is a program to demonstrate the return by value in cpp.
*/

#include<iostream>
using namespace std;

class Complex{
    private:
    float a=10,b=20;
    float c;

    public:

    void display(){
        cout<<a<<"\t"<<b<<endl;
        cout<<c<<endl;
    }
    Complex addVal(Complex c){
        Complex temp;
        temp.c = c.a + c.b;
        return temp;
    }
};

int main(){
    Complex c1,c2;
    c1=c1.addVal(c1);
    c1.display();
    
    return 0;
}