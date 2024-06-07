#include <bits/stdc++.h>
using namespace std;

// create a group of student object
class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmpid(Student a, Student b)
{
    int total_marka = a.math_marks + a.eng_marks;
    int total_markb = b.math_marks + b.eng_marks;

    if (total_marka == total_markb)
    {
        // if total marks same then check based on id
        return a.id <= b.id;
    }
    else
    {
        // if total mark not same then sort dessending order based on total mark
        return total_marka >= total_markb;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    // take objects variable value
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    // sort assending order based on if
    sort(a, a + n, cmpid);

    // object output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}