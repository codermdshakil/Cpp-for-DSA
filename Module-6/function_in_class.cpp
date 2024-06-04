#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int weight;
    int marks1;
    int marks2;
    Person(string nm, int ag, int wh, int m1, int m2)
    {
        name = nm;
        age = ag;
        weight = wh;
        marks1 = m1;
        marks2 = m2;
    };
    void hello()
    {
        cout << "hello from object " << name << " " << age << endl;
    };
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{

    // create a Person
    Person shakil("Shakil Ahmed", 21, 54, 86, 95);
    // shakil.hello();
    cout << shakil.total_marks() << endl;

    // cout << shakil.name << " " << shakil.age << " " << shakil.weight << endl;

    return 0;
}