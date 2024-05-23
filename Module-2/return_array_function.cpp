#include <bits/stdc++.h>
using namespace std;

int *fun(int n)
{
    // declare dynamic array
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    // array size input
    int n;
    cin >> n;

    // call fun from here
    int *a = fun(n);

    // output of array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}