#include<iostream>
using namespace std;

void numbers(int n,int &fact, int &fibo){

    // int sum1(int n1=n){
    //     if(n==0){
    //         return 0;
    //     }else{
    //         return n+sum(n-1);
    //     }
    // }

    int fact1(int n1){
        if(n1==1||n1==0){
            return 1;
        }else{
            return n1*fact1(n1-1);
        }
    }

    int fibo1(int n1){
        if(n1==0){
            return 0;
        }else if(n1==1||n1==2){
            return 1;
        }else{
            return fibo(n1-1)+fibo(n1-2);
        }
    }

    fibo=fibo1(n);
    fact=fact1(n);
    
                                            
}

int main(){
    int n=5;
    int fact,fibo;
    numbers(n,fact,fibo);
    cout<<fibo<<endl;
    cout<<fact<<endl;

    
    return 0;
}