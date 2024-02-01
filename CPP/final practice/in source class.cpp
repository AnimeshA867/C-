#include<iostream>
using namespace std;

class dist1{
    int feet;
    int inch;

    public:
    dist1(){
        feet=inch=0;
    }
    dist1(int feet, int inch){
        this->inch=inch;
        this->feet=feet;
    }
    void display(){
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inch:"<<inch<<endl;
    }
};

class dist2{
    int meter;
    int cm;

    public:
    dist2(){
        meter=cm=0;
    }
    dist2(int meter, int cm){
        this->meter=meter;
        this->cm=cm;
    }
    operator dist1(){
        int inch=cm*0.4;
        cout<<inch<<endl;
        int feet=(float)(meter*3.3)+inch/12;
        cout<<feet<<endl;
        inch=inch%100;
    return dist1(feet,inch);
    }

};

int main(){
    dist2 d2(12,40);
    dist1 d1;
    d1=d2;
    d1.display();
    
    return 0;
}