#include <bits/stdc++.h>
using namespace std;

// create a class
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // create a constructor
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// Student* fun(){
//     Student dy_obj;
//     Student rahim(121, 12,4.55);
//     dy_obj = new rahim;
//     // create a pointer to store rahim
//     Student *p = &dy_obj;
//     return p;
// }

int main()
{
    // create a dynamic object
    Student *karim = new Student(25, 12, 4.55);
    cout << karim->roll << " " << karim->cls << karim->gpa<< endl; 

    
 
    return 0;
}