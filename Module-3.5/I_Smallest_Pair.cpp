#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = ar[i] + ar[j] + j - i;
                mn = min(mn, val);
            }
        }
        // print
        cout << mn;
    }

    return 0;
}