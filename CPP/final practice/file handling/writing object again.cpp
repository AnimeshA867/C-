#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class sample
{
    int x;
    char name[50];

public:
    sample()
    {
        x = 111;
    }
    sample(int x, char *name)
    {
        strcpy(this->name, name);
        this->x = x;
    }
    void readdata()
    {
        cout << "Enter the name:";
        cin.getline(name, 50);
        cout << "Enter any number:";
        cin >> x;
    }
    void writedata()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << x << endl;
    }
};

int main()
{
    fstream fout;
    fout.open("object.txt", ios::out);
    {
        sample s;
        s.readdata();
        s.writedata();
        fout.write((char *)(&s), sizeof(sample));
        fout.close();
    }
    fstream fin("object.txt", ios::in);
    {
        sample s1;
        fin.read((char*)(&s1), sizeof(sample));
        s1.writedata();
    }
    fin.close();

    return 0;
}