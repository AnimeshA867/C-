#include<iostream>

using namespace std;

class dist1{
    int feet;
    float inch;

    public:
    dist1(){
        feet=inch=0;
    }
    dist1(int feet, float inch){
        this->feet= feet;
        this->inch= inch;
    }
    void display(){
        cout<<feet<<" ft "<<inch<<" inch"<<endl; 
    }
};
class dist2{
    int meter;
    float centimeters;

    public:
    dist2(){
        meter=centimeters=0;
    }
    dist2(int meter, float centimers){
        this->meter= meter;
        this->centimeters= centimers;
    }
    operator dist1(){
        dist1 d;
        int f;
        int i;
        f= meter*3.3;
        i=centimeters*0.4;
        f=f+i/12;
        i=i%12;
        return dist1(f,i);
    }
};

int main(){
    dist1 d1;
    dist2 d2(4,5);
    d1=d2;
    d1.display();


 return 0;
}