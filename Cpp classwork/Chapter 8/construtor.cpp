/*
According to book, if the base class has a constructor, the derived class also must have a constructor.
*/

#include<iostream>
using namespace std;

class num{
    protected:
    int n;

    public:
    num(int n){
        this->n=n;

    }
    num(){
        this->n=0;
    }
    bool odd1(){
        if(n%2==0){
            return false;
        }else{
            return true;
        }
    }
};

class odd : protected num{
    // int nu=10;
    public:
    odd(int n){
        this->n=n;
    }
    odd(){
        this->n = 0;
    }
    num(n);
   
void    display(){
    if(odd1()){
        cout<<"The given number is an odd number."<<endl;
    }else{
        cout<<"The given number is an even number."<<endl;
    }
    }
};


int main(){
    odd o;
    o.display();

return 0;
}