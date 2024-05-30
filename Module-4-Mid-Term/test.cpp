// C++ Program to illustrate how to define the parameterized
// constructor outside the class
#include <iostream>
#include <string.h>
using namespace std;

// class definition
class student
{
    int rno;
    char name[50];
    double fee;

public:
    student(int, char[], double);
};

// parameterized constructor outside class
student::student(int no, char n[], double f)
{
    rno = no;
    strcpy(name, n);
    fee = f;
}

// driver code
int main()
{
    student s(1001, "Ram", 10000);

    return 0;
}
