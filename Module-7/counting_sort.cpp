#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    // object from a to z 
    int frq[26] = {0};

    for (char c : s)
    {
        frq[c - 'a']++;
        // cout << c << " ";
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 0; j < frq[i - 'a']; j++)
        {
            cout << i  ; 
        }
    }

    return 0;
}