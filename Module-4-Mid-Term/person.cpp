#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    int math_mark;

    // create constructor
    Student(int cls, int roll, int math_mark)
    {
        this->cls = cls;
        this->roll = roll;
        this->math_mark = math_mark;
    }
};

int main()
{

    

    Student raton(10, 12, 86);
    Student rahim(10, 11, 81);
    Student karim(10, 10, 85);

    int rmm = raton.math_mark;
    int rhm = rahim.math_mark;
    int kmm = karim.math_mark;

    int ar[3];
    ar[0] = rmm;
    ar[1] = rhm;
    ar[2] = kmm;

    sort(ar, ar + 3, greater<int>());
    int max__result = ar[0];
    cout << max__result << " ";
    return 0;
}