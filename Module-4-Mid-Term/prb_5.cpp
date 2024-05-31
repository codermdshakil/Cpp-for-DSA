#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    int math_mark;

    // create constructor
    Student(int cls, int roll, int math_mark)
    {
        this->roll = roll;
        this->cls = cls;
        this->math_mark = math_mark;
    }
};

int main()
{

    int test;
    cin >> test;

    int mks[test];
    int rls[test];

    // declare min to find max
    int math_mk = INT_MIN;

    for (int i = 0; i < test; i++)
    {
        int c, r, mk;
        cin >> c >> r >> mk;
        Student common(c, r, mk);

        // find max number
        if (common.math_mark > math_mk)
        {
            math_mk = common.math_mark;
        }
    }

    return 0;
}