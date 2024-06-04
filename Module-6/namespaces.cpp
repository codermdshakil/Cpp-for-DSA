#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 20;
    void hello()
    {
        cout << "Namespace of Rakib";
    }
};

namespace Sakib
{
    int age2 = 30;
    void hello2()
    {
        cout << "Namespace of Sakib";
    }
}

using namespace Rakib;
using namespace Sakib;
int main()
{

    // cout << Rakib::age << endl;
    // Rakib::hello();
    cout << age << endl;
    hello();
    cout << '\n';
    cout << age2 << endl;
    hello2();
    return 0;
}

/**
 * Summary and notes
 * Class is a group of variable and function.
 * Namespace is a group of class, variable and also funcion
 * If you create multiple namespaces then you must be use different variable names
*/