#include<iostream>

using namespace std;


class circle{
    private:
    float r;
    public:
    circle(float r){
        this->r=r;
    }

friend void area(circle &c);
void display(){
    cout<<"R: "<<this->r<<endl;
}
};
/*
here we can see that to we are using a friend function.
Friend function is a type of function which is not directly associated to any class so, we can simply call the function without the use of a proper .


*/

void area(circle &c){
    c.r=10;
}
int main(){

circle c(11);
area(c);
c.display();
 return 0;
}