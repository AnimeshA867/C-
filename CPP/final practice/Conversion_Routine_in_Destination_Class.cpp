/*
    There are two ways of data conversion from user defined to user defined functions in Cpp.
    They are:
    1) Conversion in source class
    2) Conversion in destination class
*/

#include<iostream>
using namespace std;

class time1{
    float years;

    public:
    time1(){
        years=0;
    }
    time1(float years){
        this->years=years;
    }
    float getyears(){
        return years;
    }

    void display(){
        cout<<"Years: "<<years<<endl;
    }
};

class time2{
    int months, days;

    public:

    time2(){
        months=days=0;
    }
    time2(int months, int days){
        this->months=months;
        this->days=days;
    }
    time2(time1 t){
        float years=t.getyears();
        this->months=years*12;
        this->days=int(years*12*30)%30;
    }

    void display(){
        cout<<"Months: "<<months<<" \nDays: "<<days<<endl;
    }

};

int main(){
    time1 t(2.3);
    time2 t2(t);

    t.display();
    t2.display();
    
    return 0;
}