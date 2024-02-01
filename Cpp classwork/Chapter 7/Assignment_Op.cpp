#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll;
    public:
    student(string name, int roll){
        this->name=name;
        this->roll = roll; 
    }
    student(){
        name="";
        roll= 0;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.:"<<roll<<endl;
    }
    void operator =(student s){
        // student s1;
        name= s.name;
        roll=s.roll;
    }
};

int main(){
    student s1("Animesh",12),s2;
    s2=s1;
    s1.display();
    s2.display();

    cout<<"----------------------------"<<endl;

    s1=student("Aaryan",11);
    s1.display();
    s2.display();


 return 0;
}