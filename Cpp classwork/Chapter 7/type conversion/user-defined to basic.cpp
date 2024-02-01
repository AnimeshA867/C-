#include<iostream>

using namespace std;
class dist{
    int foot;
    float inch;

    public:
    dist(int foot, float inch){
        this->foot= foot;
        this->inch = inch;
    }
    dist(){
        foot=0;
        inch=0;
    }
    operator float(){
        float d= foot+(inch)/12;
        return d;
    }

};
int main(){
    dist d(5,6);
    float x= (float) d;
    cout<<x;

 return 0;
}