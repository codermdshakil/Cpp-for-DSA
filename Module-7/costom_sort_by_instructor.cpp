#include <bits/stdc++.h>
using namespace std;

// create group of object
class Freq
{
public:
    char value;
    int count;
};

bool cmp(Freq a, Freq b)
{
    if (a.count == b.count)
    {
        return a.value < b.value;
    }
    else
    {
        return a.count > b.count;
    }
}

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
    sort(f, f + 26, cmp);

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
            cout << f[i].value;
        }
    }
    return 0;
}