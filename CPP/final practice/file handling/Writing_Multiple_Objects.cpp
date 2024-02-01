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
    fstream fout;
    
    fout.open("multiple object.dat",ios::out);

    for(int i=0;i<5;i++){
        cin>>d;
        fout.write(reinterpret_cast<char*>(&d),sizeof(d));
        
    }
    fout.close();
    
    return 0;
}
