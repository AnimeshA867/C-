#include<iostream>
using namespace std;

class parent{
    public:
    int x;
    void display(){
        cout<<x<<endl;
    }
    class child{
        public:
        void manip(parent* p, int i){
            p->x=i;
        }
        
        void display(parent* p){
            cout<<p->x;
        }
    };
};

typedef parent::child c;

int main(){
    parent p;
    c child;
    child.manip(&p,10);
    child.display(&p);
    p.display();
    return 0;
}