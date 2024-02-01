#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream file1;
    file1.open("hello.txt",ios::out);
    string str="Hey there delilah, What's it like in newyork city.";

    file1<<str<<endl;
    
    
    return 0;
}