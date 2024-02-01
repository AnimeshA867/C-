#include<iostream>
#include<cstring>
using namespace std;
template<class T>

class myContainer{
    T element;
    public:
    myContainer(T arg){
        element =arg;
    }
    T increase(){
        return ++element;
    }
};

template<>

class myContainer<string>
{
     char *element;
    public:
    myContainer<string>(char *arg){
        strcpy(element,arg);
    }
    char uppercase(){
       return strupr(element);
    }
};

int main(){
    myContainer<int> myInt(12);
    myContainer<char> myChar('a');

    cout<<myInt.increase()<<endl;
    cout<<myChar.uppercase()<<endl;

    
    return 0;
}