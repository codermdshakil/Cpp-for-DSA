#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // create constructor
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{

    // Create dynamic object
    Person *rakib = new Person("Rakib Ahmed", 26);
    Person *sakib = new Person("Sakib Ahmed", 25);

    // copy dynamic object
    // rakib = sakib ; // X don't do this cause it's alocate memory then you delete sakib it will remove

    // 1 way - but this will take time
    // rakib->name = sakib->name;
    // rakib->age = sakib->age;

    // 2 Best way - copy sakib value to rakib
    *rakib = *sakib;

    // delete sakib
    delete sakib;

    // copy sakib value to rakib and print
    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}