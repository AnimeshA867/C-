//When creating a function, we can set a default value for the last argument.

#include<iostream>
#include<iomanip>
#define PI 3.14
using namespace std;
float areaofC(float r, float p=PI){
    return p*r*r;
}
int main(){
    float r;
    cout<<"Enter the radius of the circle:";
    cin>>r;


    float area = areaofC(r);

    cout<<"The area of the circle is: "<<setprecision(6)<<area;
    
    return 0;
}
