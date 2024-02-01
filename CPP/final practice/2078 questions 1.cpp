/*
    Create a class Account with data members acc_no, balance and min_balance

    Include methods for reading and displaying values of objects

    Define static member fucntion to display min_balance

    Create array of objects to store data of 5 accounts and read and display values of each object


*/

#include<iostream>
#include<math.h>
using namespace std;

class Account{
    int acc_no;
    float balance;
    static float min_balance;

    public:
        void read(){
            cout<<"Enter the account number:"<<endl;
            cin>>acc_no;
            cout<<"Enter the balance:";
            cin>>balance;
            if(balance<min_balance){
                min_balance=balance;
            }
        }

        static void display_minbalance(){
            cout<<"The min balance amongs the account is: "<<min_balance<<endl;
        }

        void display(){
            cout<<"Accout no. :"<<acc_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

float Account::min_balance=INT_MAX;

int main(){
    Account A[5];
    for(int i=0;i<5;i++){
        A[i].read();
        A[i].display();
    }
    Account::display_minbalance();
    
    return 0;
}