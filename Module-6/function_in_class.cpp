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
    Person(string name, int age, int weight, int marks1, int marks2)
    {
        // name = nm;
        // age = ag;
        // weight = wh;
        // marks1 = m1;
        // marks2 = m2;
        // if object name and function parameter variable names are same 
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->marks1 = marks1;
        this->marks2 = marks2;

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


    return 0;
}