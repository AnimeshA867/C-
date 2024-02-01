#include <iostream>
using namespace std;

class dist1
{
    int feet, inch;

public:
    dist1()
    {
        feet = inch = 0;
    }
    dist1(int feet, int inch)
    {
        this->feet = feet;
        this->inch = inch;
    }
    int getfeet(){
        return feet;
    }
    int getinch(){
        return inch;
    }
    void display()
    {
        cout << "Feet: " << feet << " inch " << inch << endl;
    }
};

class dist2{
    int meter, cm;

    public:

    dist2(){
        meter=cm=0;
    }
    dist2(int meter, int cm){
        this->meter=meter;
        this->cm=cm;
    }

    dist2(dist1 &d){
        int feet=d.getfeet();
        int inch=d.getinch();
        meter=(feet+inch*12)/3.33;
        cm=inch/0.4;
        meter+=cm/10;
        cm%=cm;
    }

    operator dist1(){
        int feet=meter*3.3;
        int inch=cm*0.4;
        feet=feet+inch/12;
        inch%=12;
        return dist1(feet,inch);

    }
     void display()
    {
        cout << "Meter: " << meter << " cm " << cm << endl;
    }
};

int main(){
    dist2 d2(12,32),d3;
    dist1 d1;
    d1=d2;

    

    d1.display();
    d3=d1;

    d3.display();
}