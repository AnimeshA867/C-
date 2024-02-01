//Copy Constructors are the type of contructors which can copy value of a object to another object of the same class.. It is used to pass value of one object to another.
/*
Syntax:
class_name(class_name object_name){
statements....
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
    // rectangle(){
    //     cout<<"Enter the length of the rectangle:";

    //     cin>>this->length;
    //     cout<<"Enter the breadth of the rectangle:";
    //     cin>>this->breadth;
    // }
    rectangle(rectangle &r){
        this->length= r.length;
        this->breadth=r.breadth;
    }
    float area(){
        return length*breadth;
    }

};

int main(){
    // rectangle r;
    rectangle r=rectangle(10,20),r2(r);
    cout<<"The area of the rectangle is: "<<r.area();
    cout<<"The area of the rectangle is: "<<r2.area();
    
 return 0;
}