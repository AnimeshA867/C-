#include<iostream>
using namespace std;

class dist{
    int feet,inch;

    public:
    dist(){
        feet=inch=0;
    }

    dist(int feet, int inch){
        this->feet=feet;
        this->inch=inch;
    }

    dist(float f){
        feet=int(f);

       inch=(f-feet)*12;
    }

    operator float(){
        return float(feet+(float)inch/12);
    }
    
};

int main(){
    dist d(12.32);
    float f=float(d);
    cout<<f<<endl;
}