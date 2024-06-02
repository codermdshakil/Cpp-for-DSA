#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];

    // declare int array to store character int value
    int a_z_int[100001];

    while (cin.getline(s, 100001))
    {
        for (int i = 0; i < strlen(s); i++)
        {
            // conver to char to int
            int num_a = s[i] - 'a';

            // copy num_a value to a_z_int array
            a_z_int[i] = num_a;
        }
        // sort array a_z
        sort(a_z_int, a_z_int + strlen(s));

        for (int i = 0; i < strlen(s); i++)
        {
            char result = a_z_int[i] + 'a';

            cout << result << "";
        }
    }

    return 0;
}