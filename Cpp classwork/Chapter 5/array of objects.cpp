/*
In C++, it is possible to create an array of object.
The syntax is:
class_name object_name[size];
*/

#include<iostream>
// #include<ostream>
#include<string>
using namespace std;

    class student{
        private:
        string name;
        int roll;

        public:
        void fillData(){
            // cout.flush();
            cout<<"Enter the name of the student:";
            getline(cin>>ws,name);
            cout<<"Enter the roll no. of the student:";
            cin>>roll;


        }
        void showData(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll no: "<<roll<<endl;
            cout<<"---------------------------"<<endl;
        }
    };

    int main(){
        student s[10];
        for(int i=0;i<10;i++){
            s[i].fillData();
        }
        for(int i=0;i<10;i++){
            s[i].showData();
        }
        
        return 0;
    }