#include<iostream>

using namespace std;

class number{
    private:
    float n;

    public:
    number(float n){
        this->n= n;
    }
    number(){
        cout<<"Enter the number:";
        cin>>n;
    }

    void display(){
        cout<<"Number: "<<n<<endl;
    }
    void operator -(){
        this->n=-this->n;
    }
};

int main(){
    number n(15);
    n.display();
    -n;
    n.display();


 return 0;
}