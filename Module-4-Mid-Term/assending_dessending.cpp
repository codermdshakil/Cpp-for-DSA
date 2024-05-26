#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    // assending order
    sort(ar, ar + n);
    // print assending order
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << "\n";

    sort(ar, ar + n, greater<long long>());
    // print dessending order
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}