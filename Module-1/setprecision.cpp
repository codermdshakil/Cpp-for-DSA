#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a; // 10.5345345234
    cin >> a;

    // printf("%0.2lf"); // 10.53 using c
    cout << fixed << setprecision(3) << a; // 10.5345
}