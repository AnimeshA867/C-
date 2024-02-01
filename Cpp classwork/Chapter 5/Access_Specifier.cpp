/*
In C++, there are various access specifiers. Access specifiers helps programmer to specify who can access methods and variables in a class.
The three access specifiers are:
    1) Private:
    2) Public:
    3) Protected:
*/

//Protected.

#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    
    public:
    student(){
        cout<<"Enter the name of the student:";
        getline(cin,name);
    }
  
};

class classmate : student{

   public:
    void hello(){
        cout<<"Hello";
    }
};


int main(){
    classmate c;
    c.hello();
    
    return 0;
}