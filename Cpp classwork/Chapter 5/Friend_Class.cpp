#include<iostream>

using namespace std;
class square{
    private:
    float l;

    public:
    square(){
        cout<<"Enter the length:";
        cin>>l;
    }
    float area(){
        return l*l;
    }
    friend class rectangle;
};

class rectangle{
    private:
    float b;

    public:
    square s;
    rectangle(){
        cout<<"Enter the breadth:";
        cin>>b;

    }
  float  area(){
        return s.l*b;
    }
};

int main(){
    float area;
    rectangle r;

    cout<<r.area();

 return 0;
}