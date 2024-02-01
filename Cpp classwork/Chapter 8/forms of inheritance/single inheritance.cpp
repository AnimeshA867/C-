//Deried by only one base class.

/*
The basic syntax of inheritance is:

class class_name_of_derived_class : _access_specifier _nameofBaseClass{


};

*/

#include<iostream>

using namespace std;
class square{
    protected:
    float length;

    public:
    square(float l){
        this->length=l;
    }
    square(){
        length=0;
    }
    float area(){
        return length*length;
    }
    void display(){
        cout<<"The area of the square is: "<<area()<<endl;
    }
};

class rectangle: public square{
    float b;
    public:
    rectangle(float l, float b){
        length=l;
        this->b=b;

    }
       rectangle(){
        length=0;
        b=0;
    }
    float area(){
        return length*b;
    } 
     void display(){
        cout<<"The area of the rectangle is: "<<area()<<endl;
    }
};

int main(){
    rectangle r1(12,13);
    r1.display();
    square s(12);
    s.display();



 return 0;
}