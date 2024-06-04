#include <bits/stdc++.h>
using namespace std;

void print_it(string &a)
{ // using & do reference
    a = "World";
}

int main()
{
    string s = "Hello";
    print_it(s);

    cout << s << endl;
    return 0;
}