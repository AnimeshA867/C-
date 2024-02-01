/*
The operator that are implied after the operator is called postfix unary operator.
*/

#include<iostream>

using namespace std;
class rectangle{
    private:
    float length;
    float breadth;

    public:
    rectangle(int l,int b){
        this->length=l;
        this->breadth= b;
        
    }
    rectangle(){
        cout<<"Enter the length of the rectangle:";
        cin>>this->length;
        cout<<"Enter the breadth of the rectangle:";
        cin>>this->breadth;

    }

    void area(){
        cout<<"The area of the rectangle is :"<<length*breadth<<endl;;
    }
    void operator--(int){
        --length;
        --breadth;
    }

};
int main(){
    rectangle r1(20,15);
    r1.area();
    r1--;
    r1.area();
 return 0;
}