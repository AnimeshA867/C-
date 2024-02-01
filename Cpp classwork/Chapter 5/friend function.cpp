#include<iostream>

using namespace std;

class circle{
    private:
    float r;
    public:
    circle(){
        cout<<"Enter the radius of the circle:";
        cin>>r;
    }

friend float area(circle c);
};
float area(circle c)
{
    return 3.14*c.r*c.r;
}

int main(){
    circle c;
    
    cout<<"The area of the circle is: "<<area(c);

 return 0;
}