#include<iostream>
using namespace std;

template <class T>

void swaap(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
template <class T>
void display(T a, T b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    string a="Animesh", b="Acharya";
    int x=10,y=20;
    
    display(a,b);
    display(x,y);

    swaap(a,b);
    swaap(x,y);

    display(a,b);
    display(x,y);
    
}