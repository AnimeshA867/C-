#include<iostream>
#include<string.h>
using namespace std;
template <class T>

T max1(T a, T b){
    return (a>b)?a:b;
}

char max1(char a, char b){
    return (a>b)?a:b;

}
char*max1(char *a, char *b){
  
    return strcmp(a,b)>0?a:b;
}

int main(){
    cout<<max1(23,12)<<endl;
    cout<<max1('z','a')<<endl;
    cout<<max1("Rey","Animesh")<<endl;

 return 0;
}