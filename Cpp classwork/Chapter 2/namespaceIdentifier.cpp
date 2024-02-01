//namespace helps to group entities under a name;

#include<iostream>
using namespace std;

namespace counter{
    int c=1;
    int d=-100;
}


int main(){
    for(int i=0;i<100;i++){
        counter::c++;
        counter::d++;
    }
    cout<<counter::c<<endl;
    cout<<counter::d<<endl;
    
    return 0;
}