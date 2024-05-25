#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
    // Constructor Declare
    Student();
    void display();
};

// Create constructor outside of class
Student::Student()
{
    // take object input 
    cin.getline(name, 100);
    cin >> roll;
    cin >> cgpa;
    getchar(); // remove enter
}

// dislay object value
void Student::display()
{
    cout <<"Name - " <<  name << " " << " Roll "  << roll << " " << " CGPA " << cgpa << endl;
}

int main()
{
    // create dynamically object 
    Student shakil, noyon;

    // display object 
    shakil.display();
    noyon.display();

    return 0;
}