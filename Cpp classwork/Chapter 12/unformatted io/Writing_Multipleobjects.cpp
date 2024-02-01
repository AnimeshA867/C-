#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student{
   char name[80];
    char address[80];
    int roll;

    public:
    void get_data(){
        cout<<"Enter the name:";
        cin>>name;

        cout<<"Enter the address:";
      cin>>address;
        cout<<"Enter the roll no.:";
        cin>>roll;
    }

    void show_data(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Roll no.: "<<roll<<endl;
    }


};

int main(){
student s;

ifstream f("student.dat");

for(int i=0;i<5;i++){
    // s.get_data();
    f.read((char*)&s,sizeof(student));
s.show_data();
}

f.close();

 return 0;
}