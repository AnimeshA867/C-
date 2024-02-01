#include<iostream>
#include<string>
using namespace std;

template <class T>

class Stack1{
    
    int top;

    T st[100];
    public:
    Stack1(){
        top=-1;
    }

    void push(T i){
        st[++top]=i;
    }
    T pop(){
       return st[top--];
    }
};

int main(){

    Stack1<int> ii;
    Stack1<string> ss;

    ii.push(12);
    cout<<ii.pop()<<endl;
    ss.push("animesh");
    cout<<ss.pop()<<endl;


 return 0;
}