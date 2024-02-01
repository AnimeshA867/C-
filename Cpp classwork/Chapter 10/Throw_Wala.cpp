#include<iostream>

using namespace std;

void divide(float a, float b){
    try{
        if(b==0){
            throw b;
        }else{
            cout<<a/b<<endl;
        }
    }
    catch(float){
        throw;
    }
}

int main(){
    float a,b;
    cout<<"Enter the value of a and b respectively:";
    cin>>a>>b;
    try{
        divide(a,b);
    }catch(float e){
        cout<<"Not divisible by "<<e<<endl;
    }

 return 0;
}