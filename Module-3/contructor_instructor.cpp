#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double cgpa;

    // declare constructor
    Student(int roll, int cls, double cgpa)
    {
        // if constructor name not equal to variable name 
        // roll = r;
        // cls = c;
        // cgpa = g;

        // if names are same 
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).cgpa = cgpa;
       
        // shortcut 
        this->roll= roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

int main()
{

    Student nadim(5, 9, 4.01);
    Student noyon(10, 9, 4.61);
    Student shakil(16, 9, 4.51);
    cout << "Roll - " << nadim.roll << " Class - " << nadim.cls << " CGPA -  " << nadim.cgpa << endl;
    cout << "Roll - " << noyon.roll << " Class - " << noyon.cls << " CGPA -  " << noyon.cgpa << endl;
    cout << "Roll - " << shakil.roll << " Class - " << shakil.cls << " CGPA -  " << shakil.cgpa << endl;
    return 0;
}