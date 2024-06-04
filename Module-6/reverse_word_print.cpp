#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{

    // create a variable to store word
    string word;

    if (ss >> word)
    {
        print(ss); // called print before print that's why it print like reverse
        cout << word << endl;
    }
}

int main()
{

    string s;
    getline(cin, s);
    // create a stringstream variable and sent s value
    stringstream ss(s);

    // called print function and sent stringstream value
    print(ss);

    return 0;
}