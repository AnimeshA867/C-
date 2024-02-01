#include<iostream>

using namespace std;
class construct{
    private:
    int x,y;
    
    public:
    construct(){
        x=0;
        y=0;
        cout<<"X"<<x<< " y"<<y<<endl;
    }
    ~construct(){
        cout<<"The memory has been deallocated.";
    }
};

int main(){
    {
        construct c;
        cout<<"This is inside the block"<<endl;
    }
        cout<<"This is outside the block"<<endl;

 return 0;
}