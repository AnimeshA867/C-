#include<iostream>
#include<cstring>
using namespace std;

void reverseit(char *s){
    int len=strlen(s)-1;
    char temp[len+1];
    strcpy(temp,s);
    int i=0;
    do{
        s[i]=temp[len-i];

        i++;
    }while(i<=len);
}

int main(){
    char s[50];
    strcpy(s,"Animesh");
    cout<<s<<endl;
    reverseit(s);
    cout<<s<<endl;
}
