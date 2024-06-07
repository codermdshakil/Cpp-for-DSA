#include <bits/stdc++.h>
using namespace std;

// create a group of student object
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    // create objects
    Student a[n];

    // take input of object
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

   // Reverse the sections
    for (int i = 0; i <n / 2; ++i) {
        swap(a[i].s, a[n - i - 1].s);
    }
    // print output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}