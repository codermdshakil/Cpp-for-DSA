#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // dessending order based on marks
            if (a[i].marks < a[j].marks)
            {
                // called swap function
                swap(a[i], a[j]);
            }
            else if (a[i].marks == a[j].marks) // if marks 2 same then roll jar kom see age thakbe
            {
                // assending
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]);
                }
            }

            // aessending order based on marks
            // if (a[i].marks > a[j].marks)
            // {
            //     // called swap function
            //     swap(a[i], a[j]);
            // }
        }
    }

    // print assending order baded on marks sorted objects

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}