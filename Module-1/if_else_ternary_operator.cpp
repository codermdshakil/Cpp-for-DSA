#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // if (n%2==0)
    // {
    //     cout << "Even\n";
    // }
    // else
    // {
    //     cout << "Odd" << endl;
    // }

    // ternary operator
    (n % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}