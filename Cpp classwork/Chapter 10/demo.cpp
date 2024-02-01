#include<iostream>

using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b:";
try{
    cin>>a>>b;

    if(b==0){
        throw b;
    }else{
        cout<<a/b<<endl;

    }
}
catch(int i){
    cout<<i<<" is not allowed as the denominator."<<endl;
}

 return 0;
}