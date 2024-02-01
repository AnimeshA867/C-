#include <iostream>
#include <iomanip>

#define PI 3.14

using namespace std;

class circle
{
private:
    float radius;

public:
    circle()
    {
        int r;
            cout<<"Enter the radius:";
    cin>>r;
        radius = r;
    }

    float getRad()
    {
        return radius;
    }
    float circum(float r = 0)
    {
        if (radius != 0)
        {
            return 2 * PI * radius;
        }
        else
        {

            return 2 * PI * r;
        }
    }

    float area(float r = 0)
    {
        if (radius != 0)
        {
            return radius * PI * radius;
        }
        else
        {

            return r * PI * r;
        }
    }
};

int main(){
  


    circle c;
    // c.setRad(r);

    cout<<c.area();
    
    return 0;
}