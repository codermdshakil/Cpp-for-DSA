#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    char ch1, ch2;
    cin >> a >> ch1 >> b >> ch2 >> c;

    // determine the expression is correct
    bool isCorrect = false;
    int correctResult;

    if (ch1 == '+')
    {
        correctResult = a + b;
    }
    else if (ch1 == '-')
    {
        correctResult = a - b;
    } 
    else if (ch1 == '*')
    {
        correctResult = a * b;
    }


    if(correctResult == c){
        isCorrect = true;
    }

    // print the result 
    if(isCorrect){
        cout << "Yes" << endl;
    }
    else{
        
        cout << correctResult << endl;
    }


    return 0;
}