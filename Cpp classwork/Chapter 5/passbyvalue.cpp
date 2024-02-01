#include<iostream>
// using namespace std;

class distance {
    private:
    int feet;
    int inches;


    public:
    void setData(int f, float i){
        feet= f;
        inches= i;
    }
    void addDistance(distance d1, distance d2){
        feet= d1.feet + d2.feet;
        inches= d1.inches + d2.inches;
        feet = feet + inches/12;
        inches = inches%12;
    }

    void display(){
        std::cout<<"("<<feet<<","<<inches<<")"<<std::endl;
    }
};

int main(){
    distance d1,d2,d3;
    
    d1.setData(5,6);
    d2.setData(4,6);
    d3.addDistance(d1,d2);
    d2.display();
    d3.display();
}