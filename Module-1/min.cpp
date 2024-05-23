#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // using build in min function for 2 value

    // int c = min(a, b);
    // cout << c;

    // if value is greater then 2 then write code like this
    int result1 = min({a, b, c, d}); // 4 7 2 1
    cout << result1;                 // 1
}