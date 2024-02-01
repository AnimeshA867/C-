/*
This is a program to demonstate the use of nesting of member functions.
In c++, the member of the class can be called from within the class.
This is called the nesting of the methods.

*/
#include<iostream>

using namespace std;

class SI{
    private:
    float p,t,r;
 
    public:
    float simpleInterest(float principle, float time, float rate){
        
        return (principle*time*rate)/100;
    }
    float totalInterest(float principle, float time, float rate){
     
        return principle+ simpleInterest(principle,time,rate);
    }

};

int main(){
    SI simpleI;
    float principle, time, rate;
    cout<<"Enter the principle, time and rate respectively:";
    cin>>principle>>time>>rate;
    cout<<"The simple interest is: "<<simpleI.simpleInterest(principle,time,rate)<<endl;
    cout<<"The total amount is: "<<simpleI.totalInterest(principle,time,rate);
    
    return 0;
}