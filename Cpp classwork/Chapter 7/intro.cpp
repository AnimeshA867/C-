/*
 In C++, it is possible to overload a pre-defined operator as per the class. Overloading means providing a new meaning to the pre-existing function.

 The syntax for overloading operator is:
 return_type operator (args...){
    function-body;
 }

 Rules for overloading operators:
 To overload any operator, we need to understand the rules applicable.
 They are:
 1) Operators already predefined in the C++ compiler can only be overloaded.
 2) If the operator is being overloaded through a member function, it takes one argument less than the operator being overloaded through member function. Thus binary operator being overloaded through a member function will only take one argument.
*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class String{
    private:
    int length;

    public:
    String(){
        cout<<"Enter the length:";
        cin>>length;
    }
    int operator +(String a){
        length+= a.length;
        return this->length;
    }
};

int main(){
String l1, l2;
int l3=l1+l2;
cout<<endl<<"The increased length is: "<<l3<<endl;

 return 0;
}