#include <bits/stdc++.h>
using namespace std;

class Default_Constructor
{
public:
    int a, b;
    // declare default constructor
    Default_Constructor()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    Default_Constructor test;
    cout << test.a << " " << test.b << endl;
    return 0;
}