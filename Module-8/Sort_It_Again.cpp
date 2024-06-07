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

bool cmp(Student a, Student b)
{

    // if (a.math_marks == b.math_marks && a.eng_marks == b.eng_marks)
    // {
    //     // if math_marks are same then sort assending order based on id
    //     return a.id <= b.id;
    // }
    // else if (a.eng_marks != b.eng_marks)
    // {
    //     // if eng_marks are not same then sort dessending order based on eng_marks
    //     return a.eng_marks >= b.eng_marks;
    // }
    // else if (a.eng_marks == b.eng_marks)
    // {
    //     // if eng_marks are  same then sort dessending order based on math_marks
    //     return a.math_marks >= b.math_marks;
    // }
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    return a.id < b.id;
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

    // called sort function
    sort(a, a + n, cmp);

    // object output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}