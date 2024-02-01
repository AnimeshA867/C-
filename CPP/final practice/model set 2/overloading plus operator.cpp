#include<iostream>
using namespace std;

class sample{
    int x;

    public:
    sample(){
        x=0;
    }
    sample(int x){
        this->x=x;

    }

    void display(){
        cout<<x<<endl;
    }

    sample operator +(sample &s1){
        sample s2;
        s2.x=this->x+s1.x;
        return s2;

    }


};


int main(){
    sample s1(12), s2(32), s3;
    s3=s1+s2;

    s1.display();
    s2.display();
    s3.display();


    
    return 0;
}