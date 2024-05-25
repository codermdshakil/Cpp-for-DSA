#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int rno;
    int fee;

    // constructor declare
    Student();
    void display();
};

// create constructor outside of class
Student::Student()
{
    // take object values
    cin.getline(name, 50);
    cin >> rno;
    cin >> fee;
    getchar();
}

// display object value
void Student::display()
{
    cout << name << " " << rno << " " << fee << endl;
}

int main()
{
    Student s;
    Student a;
    s.display();
    a.display();

    return 0;
}