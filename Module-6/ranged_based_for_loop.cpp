#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int ar[3] = {10, 20, 40};
    // range based for loop / sortcut for loop  using print array
    // for (int rs : ar)
    // {
    //     cout << rs << " "; // 10 20 40
    // }

    string s;
    cin >> s;

    // shortcut for loop 
    for (char c : s)
    {
        cout << c << " "; // - H e l l o
    }

    return 0;
}

/**
 * Summary 
 * shortcut for loop - element
 * For loop - index + element 
*/