#include<iostream>
using namespace std;

class constWala{
public:
    const int a;

    void display(int b=100)const{
        cout<<b<<endl;
    }
};

int main(){
    constWala c;
    c.display(100);

    return 0;
}