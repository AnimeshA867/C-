#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class dummy{
    int roll;
    char name[50];

    public:
    dummy(){
        roll=0;
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

    fstream fin;
    fin.open("multiple object.dat",ios::in);

    for(int i=0;i<5;i++){
        fin.read(reinterpret_cast<char*>(&d),sizeof(dummy));
        cout<<d;
    }

    fin.close();
    
    return 0;
}