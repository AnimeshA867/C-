/* Method inside a function in C++ can be defined inside the classes and outside the classes. 

#To define the method inside the function, we just define the function inside the function.
The syntax is:
return_type identifier(args....){
    func.....;
}

# To define the method outside the function, we first declare the method inside of the class then define the method outside the class.
The syntax is:

return_type class_name::identifier(args...){
    func....;
}

*/


//Here is program to demonstrate it.

#include<iostream>
#include<iomanip>
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
    circle c;
    
    float area,perimeter,radius;
    area=c.area();
    perimeter=c.perimeter();
    radius=c.getRad();

    cout<<"The area of circle of radius "<<radius<< " is "<<area<<endl;
    cout<<"The perimeter of circle of radius "<<radius<< " is "<<perimeter<<endl;




    return 0;
}