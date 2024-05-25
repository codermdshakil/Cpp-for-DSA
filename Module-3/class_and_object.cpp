#include <bits/stdc++.h>
using namespace std;

class Friends
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{

    // Friends obj1;
    // obj1.roll = 16;
    // obj1.cgpa = 3.67;

    // // copy name value for temporary
    // char tmp[100] = "Shakil Ahmed";
    // // first param take where, second param take what
    // strcpy(obj1.name, tmp);

    Friends nadim;
    char tmp1[100] = "Nadim Hassan";
    strcpy(nadim.name, tmp1);
    nadim.roll = 20;
    nadim.cgpa = 4.00;

    Friends noyon;
    char tmp2[100] = "Noyon Rahman";
    strcpy(noyon.name, tmp2);
    noyon.roll = 9;
    noyon.cgpa = 4.50;

    Friends shakil;
    char tmp3[100] = "Shakil Ahmed";

    strcpy(shakil.name, tmp3);
    shakil.roll = 16;
    shakil.cgpa = 3.67;

    cout << "Name - " << nadim.name << endl;
    cout << "Age - " << nadim.roll << endl;
    cout << "CGPA - " << nadim.cgpa << endl;
    cout << "\n"
         << endl;
    cout << "Name - " << noyon.name << endl;
    cout << "Age - " << noyon.roll << endl;
    cout << "CGPA - " << noyon.cgpa << endl;
    cout << "\n"
         << endl;
    cout << "Name - " << shakil.name << endl;
    cout << "Age - " << shakil.roll << endl;
    cout << "CGPA - " << shakil.cgpa << endl;
    return 0;
}