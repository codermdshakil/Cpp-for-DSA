#include <bits/stdc++.h>
using namespace std;

int print(stringstream &ss)
{
    string word;
    int flag = 0;
    if (ss >> word)
    {
        if (word == "Jessica")
        {
            return 1;
            print(ss);
        }
        else
        {
            return 0;
            print(ss);
        }
    }
}

int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;

    bool flag = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}