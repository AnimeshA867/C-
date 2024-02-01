#include<iostream>

using namespace std;

class distance1{
    int feet;
    float inch;

    public:
    distance1(int feet, float inch){
        this->feet = feet;
        this->inch= inch;
    }
    distance1(float feet){
        int temp = (int) feet;
        this->feet= temp;
        this->inch=12*(feet-temp);
    }
    void display(){
        cout<<"Feet: "<<this->feet<<endl;
        cout<<"Inches: "<<this->inch<<endl;
    }

};

int main(){
    distance1 d(5.56);
    d.display();

 return 0;
}