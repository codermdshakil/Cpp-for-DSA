#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int ar[n];
    // using for loop input of array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
  

    // range based for loop / sortcut for loop  using print array
    for (int rs : ar)
    {
        cout << rs << " ";
    }

    return 0;
}