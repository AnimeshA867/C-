// #include<iostream>
// // using namespace std;

// class distance {
//     private:
//     int feet;
//     int inches;


//     public:
//     void setData(int f, float i){
//         feet= f;
//         inches= i;
//     }
//     void addDistance(distance *d1, distance*d2){
//         feet= d1->feet + d2->feet;
//         inches= d1->inches + d2->inches;
//         feet = feet + inches/12;
//         inches = inches%12;
//     }

//     void display(){
//         std::cout<<"("<<feet<<","<<inches<<")"<<std::endl;
//     }
// };

// int main(){
//     distance d1,d2,d3;
    
//     d1.setData(5,6);
//     d2.setData(4,6);
//     d3.addDistance(&d1,&d2);
//     d2.display();
//     d3.display();
// }

#include<iostream>
using namespace std;

class area{
    private:
    float f=100;
    public:
    float areaDis=10;
    void display(){
        cout<<areaDis<<endl<<f<<endl;
    }
    void manipulate(area *a){
        a->areaDis=11;
    }

    void manipulate2(area *a){
        a->f=10000;
    }
};

int main(){
    area a1,a2;

    a1.display();
    a2.manipulate(&a1);
    a2.manipulate2(&a1);
    a1.display();
    a2.display();
    
    return 0;
}
