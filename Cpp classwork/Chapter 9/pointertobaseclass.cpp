#include<iostream>

using namespace std;

class A{
    protected:
    public:
    int a=10;
    void display(){
        cout<<"This is nothing. "<<a<<" "<<endl;
    }
};

class B: public A{
    public:
   B(){
    a=51;
   }
    void display(){
        cout<<"This is nothing but from class B. "<<a<<"  "<<endl;
    }

};
int main(){

    A a,*app, *bap;
    B b;

    app=&b;
    bap=&a; 
 
    app->display();
    bap->display();

    




 return 0;
}