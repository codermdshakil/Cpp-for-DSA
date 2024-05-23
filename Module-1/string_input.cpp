#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    // without space string input

    // char s[100];
    // cin >> s;
    // cout <<  s << endl;

    // with space string input

    char s[100];
    int a;
    cin >> a;
    getchar(); // remove enter
    // fgets(s, 100, stdin); in c 3 parameter
    cin.getline(s, 100); // in c++ 2 parameter
    cout << a << endl;
    cout << s << endl;
    return 0;
}