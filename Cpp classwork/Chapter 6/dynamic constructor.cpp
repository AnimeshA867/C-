/*
Dynamic Constructor is a type of constructors which is used to allocate memory during the runtime of the program.


*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class strings{
private:
int length;
char *name;
public:
    strings(){
        length=0;
        name = new char[length=1];
    }
    strings(char *s){
        length=strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    void join(strings &a, strings &b){
        length = a.length + b.length;
        delete name;
        name = new char[length+1];
        strcpy(name,a.name);
        strcat(name," ");
        strcat(name,b.name);

           cout<<"The name is "<<name;
    }

};

int main(){
    strings f("Aaryan"),l("Acharya"),n;
    n.join(f,l);


 return 0;
}