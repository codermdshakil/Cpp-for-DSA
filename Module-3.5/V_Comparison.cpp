#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char inputChar;
    cin >> inputChar;
    int b;
    cin >> b;



    
    // Check if the input character is '>'
    if (inputChar == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
        };
    }
    else if (inputChar == '<') // Check if the input character is '<'
    {
        if (b < a)
        {
            cout << "Wrong" << endl;
        }
    }
    else if (inputChar == '=') // Check if the input character is '='
    {
        if (a = b)
        {
            cout << "Right" << endl;
        }
    }

    return 0;
}
