#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string names;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    // getchar();

    // create array of objects
    // Student a[n];

    // int *p = new int[n];
    // Dynamic array
    Student *a = new Student[n];
    // input values
    for (int i = 0; i < n; i++)
    {
        getchar(); // good
        getline(cin, a[i].names);
        cin >> a[i].roll >> a[i].marks;
        // getchar();
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].names << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
