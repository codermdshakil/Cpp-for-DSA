#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // if we want to max number between 2 number
    int result = max(a, b);

    // if we want to max number grather then 2 number
    int result1 = max({a, b, c, d}); // 2 5 1 4

    cout << result1; // 5
}