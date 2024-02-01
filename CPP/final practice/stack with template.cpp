#include<iostream>
#include<string>
using namespace std;

template<class T>

class stack{
    T st[100];
    int i;

    public:
        stack():i(0){}
        T pop(){
            return st[i--];
                    
        }
        void push(T a){
            st[i++]=a;
        }
    void display(){
        while(i--!=0){
            cout<<st[i]<<endl;
        }
    }

};

int main(){
    string lee="";
    stack <int>sint;
    stack <string>sstr;

    for(int i=0;i<50;i++){
        sint.push(i);
    }
    for(int i=0;i<50;i++){
        sstr.push(lee.append((to_string(i))));
    }

    sint.pop();

    sint.display();
    sstr.display();

    
    return 0;
}