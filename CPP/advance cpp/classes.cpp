#include<iostream>
using namespace std;
class hello {
    public:
    void hi(){
        cout<<"Hello every one"<<endl;
    }

};
// class hi {
//     static:
// }
int main(){
    hello h;
    h.hi();
    int a=10;
    if(a==11){
        cout<<"I am 11.";
    }else{
        cout<<"I am not 11.";
    }
}
