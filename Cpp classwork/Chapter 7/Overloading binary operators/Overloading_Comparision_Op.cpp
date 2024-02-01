#include<iostream>

using namespace std;
class numbers{
    int n;

    public:
    numbers(int n){
        this->n= n;

    }
    numbers(){
        cout<<"Enter a number:";
        cin>>n;
    }
    bool operator >(numbers n){
        if(n.n>this->n){
            return false;
        }else{
            return true;
        }
    }
};
int main(){
    numbers n(14), n2(13);
    if(n>n2){
        cout<<"True";
    }else{
        cout<<"False";
    }

 return 0;
}