#include<iostream>
using namespace std;

class base{
    int a;
    protected:
    int b;
    public:
    int c;
};
class derived1:base{
    public:
    void data(){
        cin>>b>>c;
    }
};
class derived2: derived1{
    public:
    void data(){
        cin>>b>>c;
    }
};


int main(){
    derived1 d1;
    d1.c=19;
    derived2 d2;
    d2.c=19;
    
    return 0;
}
