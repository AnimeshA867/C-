#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c; 
    cout<<"Enter the value of a,b,c:"<<endl;
    cin>>a>>b>>c;
    float d=sqrt((b*b)-4*a*c);
    if(d>0){
        float x1=(-b+d)/(2*a);
        float x2=(-b-d)/(2*a);
        cout<<x1<<", "<<x2;
    }
    else if(d==0){
        float x1=(-b)/(2*a);
        cout<<x1;
    }
    else{
        cout<<"As the value of d is in negative, the root is an imaginary number which I don't wish to write code for.";
    }
}