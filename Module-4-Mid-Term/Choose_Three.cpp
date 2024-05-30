#include <bits/stdc++.h>
using namespace std;

int can_find_triplet_with_sum(int *arr, int n, int S)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (arr[i] + arr[j] + arr[k] == S)
                {
                    return S;
                }
            }
        }
    }
    return 0;
}

int main()
{

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, sum;
        cin >> n >> sum;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if (can_find_triplet_with_sum(ar, n, sum))
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}