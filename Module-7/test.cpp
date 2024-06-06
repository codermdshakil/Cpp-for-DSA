#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b)
{
    return a.marks >= b.marks;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                mn = a[i];
            }
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i].marks > a[j].marks)
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    // sort(a, a + n, cmp);
    // print objects

        return 0;
}