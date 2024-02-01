#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
using namespace std;
int main(){

char sub[5][30]={"Mathematics","English","OOP","Stats","Physics"};

int m[5],l;
float total, per;

ofstream f;
f.open("student.txt");

for(int i=0;i<5;i++){
    cout<<"Enter the marks of "<<sub[i]<<endl;
    cin>>m[i];
    total+=m[i];
}

f<<"Subject"<<setw(30)<<"Marks"<<endl;
f<<"-------------------------"<<endl;

for(int i=0;i<5;i++){
    l=strlen(sub[i]);
    f<<sub[i]<<setw(30-l)<<m[i]<<endl;
}
f<<"-------------------------"<<endl;

f<<"Total: "<<total<<endl;
f<<"Percentage:"<<total/5<<endl;

f.close();





 return 0;
}