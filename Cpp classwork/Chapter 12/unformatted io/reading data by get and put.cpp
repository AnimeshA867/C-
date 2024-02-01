#include<iostream>
#include<fstream>

using namespace std;
int main(){

    //The end of the file can be detected by using EOF() function or by the use of the filestream object.
/*
    char c;

    ifstream f("abc.txt");
    while(!f.eof()){
        f.get(c);
        cout.put(c);
    }
    while(f){
        f.get(c);
        cout.put(c);
    }

    f.close();
*/

char str[20];
ifstream f("abc.txt");

while(!f.eof()){
    f>>str;
    cout<<str<<"  ";
}

f.close();

 return 0;
}