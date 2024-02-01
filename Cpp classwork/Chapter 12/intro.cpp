#include<iostream>
#include<fstream> 
#include<string>

/*
The useful classes for working in files in cpp are:
1) fstreambase
2) ifstream
3) ofstream


In order to open files in c++, there are basically two ways:
1) With the use of constructor.
2) With the help of open() member function of the class.
*/

using namespace std;
int main(){
    /*
string st="hello";

//Opening files using constructor and reading it.
ofstream out("sample60.txt");//Write operation.
out<<st;
*/



//Opening files using construtor and writting to it.

string input;

ifstream in("sample60.txt");
ifstream in2("sample.txt");

// in2>>input;

getline(in2,input);

cout<<input<<endl;
in2.close();

 return 0;
}