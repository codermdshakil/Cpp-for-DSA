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

    // create dynamic array of objects
    Student *a = new Student[n];

    // take input objects
    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    // Prints objects
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " <<a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}