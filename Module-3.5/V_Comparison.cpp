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

    // determine a result variable inisally true
    bool result;

    // Check if the input character is '>'
    if (inputChar == '<')
    {
        result = (a < b);
    }
    else if (inputChar == '>') // Check if the input character is '<'
    {
        result = (a > b);
    }
    else if (inputChar == '=') // Check if the input character is '='
    {
        result = (a == b);
    }
    else
    {
        result = false;
    }

    // show result
    if (result)
    {
        cout << "Right" << endl;
    }
    else
    {

        cout << "Wrong" << endl;
    }

    return 0;
}
