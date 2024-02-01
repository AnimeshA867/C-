#include<iostream>
using namespace std;

class employee{
    int eid;
    string name;

    public:
    employee(){
        this->eid=0;
        this->name="";
    }
    employee(int eid, string name){
        this->name=name;
        this->eid=eid;
    }

    void getdata(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the eid:"<<endl;
        cin>>eid;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Eid: "<<eid<<endl;
    }
};

class manager{
    int salary;

    public:
    employee e;

    void getdata(){
        e.getdata();
        cout<<"Enter the salary:";
        cin>>salary;
        }

    void display(){
        e.display();
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    manager hari;
    hari.getdata();
    hari.display();
    
    return 0;
    
    
}