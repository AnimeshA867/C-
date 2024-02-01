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
    float operator +(number n){
       return this->n+ n.n;
    }
};

int main(){
    number n(15),n1(17);
    int n2;
   n2=n1+n;
   cout<<n2;


 return 0;
}