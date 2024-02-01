#include<iostream>
using namespace std;

class sample{
    int a,*b;

    public:

    sample(){
        a=0;
        b=new int;
    }
    sample(int x){
        a=x;
        b=&a;
    }
    void display(){
        cout<<"x: "<<*b<<endl;
    }
//  sample(const sample& obj) {
//         a = obj.a;
//         b = new int(*(obj.b));
//     }
    void change(int x){
        a=x;
    }
};

int main(){
    sample s1(12),s2=s1;
    s1.display();
    s2.display();
    s1.change(132);
    s2.display();
    return 0;
}