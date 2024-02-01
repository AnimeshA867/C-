#include<iostream>
using namespace std;

class dummy{
    int roll;
    string name;

    public:
    dummy(){
        roll=0;
        name="";
    }
    friend void operator <<(ostream& out,dummy& d);
    friend void operator >>( istream& in,dummy& d );

};

void operator <<(ostream& out,dummy& d){
    out<<"Name: "<<d.name<<endl<<"Roll: "<<d.roll<<endl;
   
}

void operator >>( istream& in,dummy& d ){
    in>>d.name>>d.roll;

}

int main(){
    dummy d;

    cout<<"Enter the name and roll no. of the dummy: "<<endl;
    cin>>d;
    cout<<d;
    
    return 0;
}
