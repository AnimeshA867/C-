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
  
    float area(){
        return length*breadth;
    }

};

int main(){
    // rectangle r;
    rectangle r=rectangle(10,20),r2=r;
    cout<<"The area of the rectangle is: "<<r.area();
    cout<<"The area of the rectangle is: "<<r2.area();

 return 0;
}