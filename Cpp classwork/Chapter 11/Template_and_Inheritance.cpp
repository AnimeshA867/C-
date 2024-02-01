//This is a program to demonstrate inheritance in cpp. with the help of template. 

#include<iostream>

using namespace std;

template <class T>

class base{
    protected:
    T val;

    public:
    base(){
        cout<<"Enter the value:";
        cin>>val;
    }
    void getval(){
        cout<<"val:"<<val<<endl;

    }
};

template <class T>

class derived: base<T>{

    T val2;
    public:

    derived(){
       
        cout<<"Enter the value 2:";
        cin>>val2;
    }
    void getval(){
        base <T> ::getval();
        // t.getval();
        cout<<"Val2: "<<val2<<endl;
    }
};

int main(){
    derived<int> d;
    d.getval();

 return 0;
}