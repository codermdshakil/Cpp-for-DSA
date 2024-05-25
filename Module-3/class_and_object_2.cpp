#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{

    Students a, b;
    cin.getline(a.name, 100); // take a full line 
    cin >> a.roll >> a.cgpa;
    getchar(); // remove a enter
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}