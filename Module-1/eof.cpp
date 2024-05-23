#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    // in c language

    // int a, b;
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

    // in C++ language
    int a, b;
    while (cin >> a >> b) // in c++ you don't need to use != EOF cause C++ automatically detact that were is file end
    {
        cout << a << " " << b << "\n";
    }

    return 0;
}