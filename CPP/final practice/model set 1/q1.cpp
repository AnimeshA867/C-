//Different types of constructor with example

#include<iostream>
using namespace std;

class sample{
    public:
    int x,*xp;

      
     sample(){//Default constructor
        x=0;
     }
     sample(int x){// Parameterized constructor
        this->x=x;
        xp=&this->x;

     }

     void change(int x){
        this->x=x;
     }
/*
     sample (sample &s){ //Copy constructor   IF the copy constructor was not present then the defaults copy constructor would have been used. The difference between copy constructor and default copy constructor is that, copy constructor complies the data values of the member varaible whereas the default copy constructor just point to the address of another object.
        this->x=s.x;
     }
*/
        void display(){
            cout<<"x: "<<x<<endl;
            
        }
};

int main(){
    sample s1(12),s2(s1),s3;
    s3=s2;
    // s2.xp=&s2.x;
    s1.change(32);
    s1.display();
    s2.display();
    s3.display();

    cout<<&s2<<endl;
    cout<<&s3<<endl;
    
    return 0;
}
