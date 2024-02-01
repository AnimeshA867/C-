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

    sample add( sample &s1){
        x+=s1.x;
        return *this;
    }
    void display(){
        cout<<"x: "<<x<<endl;
    }
} ;

int main(){
    sample s1(12),s2(31),s3;
    s3=s1.add(s2);
    s3.display();
}