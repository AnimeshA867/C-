
class numbers{
    public:

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
};
#include<iostream>
#include<conio.h>
using namespace std;



int main(){
    numbers n;

    int a;
    cout<<"Enter the number to find factorial for:"<<endl;
   cin>>a;
    int b=n.fact(a);
    cout<<"\nThe factorial of the number is "<<b;
}