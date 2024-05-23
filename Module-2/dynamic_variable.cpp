#include <bits/stdc++.h>
using namespace std;

int *fun()
{

    // create dynamic variable
    int *a = new int;
    *a = 100;
    return a;
}

int main()
{
    // int x = 10;

    // create dynamic variable
    // int *a = new int;
    // *a = 10;
    // cout << *a << endl;

    // create float dynamic variable
    // float *f = new float;
    // *f = 1.43524;
    // cout << *f << endl;

    // call dynamic variable
    int *p = fun();
    cout << *p << endl;

    return 0;
}