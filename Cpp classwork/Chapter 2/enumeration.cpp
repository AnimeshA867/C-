//Enumeration is a user-defined type variable consisting of a set of names of constants.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    enum {SUN=1, MON, TUE, WED, THU, FRI,SAT};

    cout<<SUN<<endl<<MON<<endl<<TUE<<endl<<WED<<endl<<THU<<endl<<FRI<<endl<<SAT<<endl;
}