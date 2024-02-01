#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    char c;
    fstream fin;
    fin.open("hello.txt",ios::in);
    while(!fin.eof()){
        fin.get(c);
        cout.put(c);
        n++;
    }
    cout<<"There were "<<n<<" characters in the text file.";

    
}