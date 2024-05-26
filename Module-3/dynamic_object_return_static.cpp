#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

// return dynamic object from function
Student *fun()
{
    // create dynamic object
    Student *rahim = new Student(10, 10, 3.4);
    // return rahim
    return rahim;
}

int main()
{

    Student *ans = fun();
    // cout << ans->roll; // 10
    ans->roll = 50; // change the value of roll 50

    // output of dynamic object
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    // delete dynamic object
    delete ans;
    // cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    return 0;
}