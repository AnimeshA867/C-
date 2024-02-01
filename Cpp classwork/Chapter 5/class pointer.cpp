/* The pointer can be used to point classes and it's method.
    As the pointer only store the memory address of the method in class, so we need to create a new operator to allocate the memory for the object.
*/

#include<iostream>
#include<iomanip>
#include<stdio.h>
#define PI 3.14

using namespace std;


class circle{
    private:
    float radius;

    public:
    circle(){
        cout<<"Enter the radius of the circle:";
        cin>>radius;
    }

    float getRad(){
        return radius;
    }

    float perimeter(){
        return 2*PI*radius;
    }

    float area();
};


float circle::area(){
    return PI*radius*radius;
}

int main(){
    circle *c = new circle();
    float radius, perimeter, area;

    radius= c->getRad();
    area= c->area();
    perimeter= c->perimeter();

    
    // cout<<"The area of circle of radius "<<setprecision(5)<<radius<< " is "<<setprecision(5)<<area<<endl;
    printf("The area of the circle of radius %.2f is %.2f\n",radius,area);
    cout<<"The perimeter of circle of radius "<<setprecision(5)<<radius<< " is "<<setprecision(5)<<perimeter<<endl;



    
    return 0;
}