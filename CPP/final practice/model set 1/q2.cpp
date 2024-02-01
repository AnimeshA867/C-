#include<iostream>
using namespace std;

class beta;

class alpha{
    int x;

    public:
    alpha(int x){
        this->x=x;
    }
    friend int add(alpha a, beta b);
};

class beta{
    int y;
    public:
    beta(int y){
        this->y=y;
    }

    friend int add(alpha a, beta b);
};

int add(alpha a, beta b){
    return a.x+b.y;
}

int main(){
    alpha a(14);
    beta b(231);

    cout<<add(a,b);
}