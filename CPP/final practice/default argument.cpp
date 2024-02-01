//Defaults arguments are the type of arguments that are already defined in the function such that when a function is called and the value is not passed, then the function uses default values for those argument and presents the results

#include<iostream>
using namespace std;


float si(float principle, float time=2, float rate){
    return (principle*time*rate)/100;
}

int main(){
    // cout<<si(10000)<<endl;;
    cout<<si(10000,12)<<endl;
    cout<<si(12000,10,12)<<endl;
    
    return 0;
}