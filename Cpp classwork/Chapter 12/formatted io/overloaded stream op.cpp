#include<iostream>
#include<fstream>
#include<string>
    using namespace std;
    int main(){
        ifstream f("abc.txt");
    string s;
    // cout<<"Enter the value to be printed in the file:";
    // getline(cin>>ws,s);

    // f<<s<<endl;


    // f>>s;
    //There is an another way. A better way.

    getline(f,s);
    cout<<s<<endl;

 return 0;
}