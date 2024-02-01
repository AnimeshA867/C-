#include<iostream>
#include<fstream>

using namespace std;

/*
The syntax to be used while using write and read are:

filestream.write((char*)&object_name,sizeof(object));
filestream.read((char*)&object_name,sizeof(object));

*/


struct student{
    int roll;
    char name[30];
    char address[60];
};

int main(){
student s;
/*
ofstream fout("student.dat",ios::binary);

cout<<"Enter the roll no. of the student:";
cin>>s.roll;
cout<<"Enter the name of the student:";
cin>>s.name;
cout<<"Enter the address of the student:";
cin>>s.address;
fout.write((char*)&s, sizeof(student));

cout<<"The data has been successfully written."<<endl;

fout.close();

*/
ifstream fin("student.dat");

fin.read((char*)&s,sizeof(student));

cout<<"Roll no.: "<<s.roll<<endl;
cout<<"Name: "<<s.name<<endl;
cout<<"Address: "<<s.address<<endl;



 return 0;
}