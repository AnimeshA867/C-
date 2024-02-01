#include<iostream>

using namespace std;
class number{
    private:
    int n;

    public:
    number(int n){
        this->n=n;
    }
    number(){
        cout<<"Enter the number:";
        cin>>n;
    }
  void  display(){
        cout<<n<<endl;
    }

    friend void operator ++(number&, int);
};

void operator ++(number& n, int){
    n.n++;
}
int main(){
    number n(15);

    n.display();
    n++;
    n.display();

 return 0;
}