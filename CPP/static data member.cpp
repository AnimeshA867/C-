#include<iostream>
using namespace std;

class counter{
    static int c;

    public:
    void increment(){
        c++;
    }
    void display(){
        cout<<c<<endl;
    }

};
int counter::c;

int main(){
    counter c;

    for(int i=0;i<10;i++){
        c.increment();
    }
    c.display();
    
    return 0;
}