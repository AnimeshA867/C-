#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    char str[80]="Animesh Acharya";

    ofstream f("abc.bin",ios::binary);
    // f.getline(str,79);
    f<<13;
    if(f.is_open()){
        cout<<"The file is open."<<endl;
    }else{
        cout<<"The file is not opened."<<endl;
    }
    cout<<"From the file: \n"<<str<<endl;
    f.close();
 return 0;
}