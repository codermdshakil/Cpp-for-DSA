#include <bits/stdc++.h>
using namespace std;

// create group of object
class Freq
{
public:
    char value;
    int count;
};
 

int main()
{
    // take input string
    string s;
    cin >> s;

    cout << s << endl;

    // create 26 object using freq group
    Freq f[26];

    // take inisial value of objects
    for (int i = 0; i < 26; i++)
    {
        f[i].value = char(i + 'a'); // use typecasting
        f[i].count = 0;
    }

    // get single character
    for (char c : s)
    {
        // push this chatacter to object  and count
        for (int i = 0; i < 26; i++)
        {
            if (c == f[i].value)
            {
                f[i].count++;
            }
        }
    }

    // sort objects based on count dessending order

    int mn = INT_MAX;

    for (int i = 0; i < 25; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            if (f[i].count < mn)
            {
                swap(f[i], f[j]);
            }
        }
    }

    // print objects dessending order
    for (int i = 0; i < 26; i++)
    {
        if (f[i].count != 0)
        {
            cout << f[i].value << " " << f[i].count << endl;
        }
    }

    cout << "----------" << endl;

    for (int i = 0; i < 26; i++)
    {
        // cout << f[i].value << " " << f[i].count << endl;
        for (int j = 0; j < f[i].count; j++)
        {
            cout << f[i].value ;
        }
    }
    return 0;
}