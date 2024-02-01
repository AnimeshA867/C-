#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    string name;
    int roll;

    public:
    student(){
        cout<<sizeof(string)<<endl;
        cout<<"Enter the name of the student:";
        getline(cin>>ws,name);
        cout<<"Enter the roll no.:";
        cin>>roll;
    }
    void display(int roll, string name){
        cout<<"Original:"<<this->name<<endl;
        cout<<"Manipulated:"<<name<<endl;
        cout<<"Original:"<<this->roll<<endl;
        cout<<"Manipulated:"<<roll<<endl;
    }
};

int main(){
    string name="Aniemsh";
    int roll = 10;
    student s;
    cout<<sizeof(s);
    s.display(roll,name);
    
    return 0;
}