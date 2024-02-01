// #include<iostream>


// using namespace std;


// class statC{
//     // private:

//     public:
//     static float count;
//     void display(){
//         cout<<count<<endl;
//     }
//     void manip(int n){
//         count=n;
//     }

// };
// float statC::count=0;
// int main(){

//     statC s1, s2,s3;

//     s1.manip(5);
//     s1.display();
//     s2.manip(7);
//     s2.display();
//     s3.manip(10);
//     s2.display();






//  return 0;
// }


/*
In C++, static member need to be explicitely declared outside the class using scope resolution operator.

*/
#include<iostream>

using namespace std;

class staticWala1{
    public:
    staticWala1(){
        cout<<"This is the constructor of the first class."<<endl;
    }
    static void display(){
        cout<<"This is a statement printed with the use of first class."<<endl;
    }
};

class staticWala2{
    public:
    static staticWala1 a;

    staticWala2(){
        cout<<"This is the constructor of the second class."<<endl;
    a.display();
    }
    

};

staticWala1 staticWala2::a;

int main(){

staticWala2 s;


 return 0;
}