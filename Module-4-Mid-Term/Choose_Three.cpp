#include <bits/stdc++.h>
using namespace std;

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

        // array reverse
        sort(ar, ar + n, greater<int>());
        
        int first_num, second_num, third_num, first_second_sum;

        for (int i = 0; i < 5; i++)
        {
            first_num = ar[0];

            for (int j = 1; j < n; j++)
            {
                second_num = ar[1];
                first_second_sum = first_num + second_num;

                for (int k = 2; k < n; k++)
                {
                    if (first_second_sum + ar[k] == sum)
                    {
                        first_second_sum = first_second_sum + ar[k];
                    }
                }
            }
        }

        if (first_second_sum == sum)
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