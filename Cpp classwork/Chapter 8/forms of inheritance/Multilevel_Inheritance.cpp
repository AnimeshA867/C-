
#include<iostream>

using namespace std;
class square{
    protected:
    float length;

    public:
    square(float l){
        this->length=l;
    }
    square(){
        length=0;
    }
    float area(){
        return length*length;
    }
    void display(){
        cout<<"The area of the square is: "<<area()<<endl;
    }
};

class rectangle: public square{
    protected:
    float b;
    
    public:
    rectangle(float l, float b){
        this->length=l;
        this->b=b;

    }
       rectangle(){
        this->length=0;
        b=0;
    }
    float area(){
        return this->length*b;
    } 
     void display(){
        cout<<"The area of the rectangle is: "<<area()<<endl;
    }
};

class cuboid : public rectangle{
    float h;

    public:
    cuboid(float l, float b, float h){
        this->h= h;
    }
           cuboid(){
        length=0;
        b=0;
        h=0;
    }

    cuboid(float l){
        this->length=l;
    }
    float volume(){
        return length*b*h;
    }
     void display(){
        cout<<"The volume of the cuboid is: "<<volume()<<endl;
    }
};

int main(){
    rectangle r1(12,13);
    r1.display();
    square s(12);
    s.display();
    cuboid(12,23,43);
    s.display();


 return 0;
}