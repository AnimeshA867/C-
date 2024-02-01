#include<iostream>

using namespace std;

class A{
    public:
   virtual  void display(){
        cout<<"This is from the first class."<<endl;
    }
};

class B: public A{
 public:
      void display(){
        cout<<"This is from the second class."<<endl;
    }
};
class C: public A{
 public:
      void display(){
        cout<<"This is from the third class."<<endl;
    }
};
class D: public A{
 public:
      void display(){
        cout<<"This is from the fourth class."<<endl;
    }
};

int main(){
    A a, *ptr;
    B b;
    C c;
    D d;

    ptr=&b;
    ptr->display();
    ptr=&c;
    ptr->display();
    ptr=&d;
    ptr->display();

 return 0;
}