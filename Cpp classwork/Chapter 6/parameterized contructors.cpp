//Parameterized Constructors are the type of contructors which have arguments as their parameters. It is used to pass value as arguments.
/*
Syntax:
class_name(args..){

}

*/

#include<iostream>

using namespace std;

class rectangle{
    private:
    float length;
    float breadth;

    public:
    rectangle(float length, float breadth){
        this->length=length;
        this->breadth=breadth;
    }
    rectangle(){
        cout<<"Enter the length of the rectangle:";

        cin>>this->length;
        cout<<"Enter the breadth of the rectangle:";
        cin>>this->breadth;
    }
    float area(){
        return length*breadth;
    }

};

int main(){
    // rectangle r;
    rectangle r=rectangle(10,20);
    cout<<"The area of the rectangle is: "<<r.area();

 return 0;
}