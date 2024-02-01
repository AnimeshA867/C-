#include<iostream>

using namespace std;

int main(){
    char line[50];

    cout<<"Enter a line:"<<endl;
    cin.getline(line,50);

    // cout.write(line,50);
    cout<<line<<endl;

    return 0;
}