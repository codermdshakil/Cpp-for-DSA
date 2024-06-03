#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // cout << *s.begin() << endl; // first char pointer
    // cout << *(s.end()-1) << endl; // last char pointer

    // create a new iterator
    // string::iterator it;
    // string::iterator it = auto 
    // auto just can use c++ version 12
    for (auto it =  s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}