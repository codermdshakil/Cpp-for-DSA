#include <bits/stdc++.h>
using namespace std;

// make a student group using class
class Student
{
public:
    string name;
    int age;
};

int main()
{

    int n;
    cin >> n;
    // make n size of students
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age;
    }

    // assending order based on age
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i].age > a[j].age)
            {
                swap(a[i], a[j]);
            }
        }
    }

    // sorted print objects
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << endl;
    }

    return 0;
}