#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Str
{
    string name;


public:
    Str(string str){
        // strcpy(this->name,str);
        this->name = str;
    }
    Str(){
        cout<<"Enter a string:";
        getline(cin>>ws,name);
    }

    string operator +(Str s){
      return name.append(" ").append(s.name);

    }

};
 int main()
{
    Str s1("Animesh"), s2("Acharya");
    string name = s1+s2;
    cout<<name;
    return 0;
}