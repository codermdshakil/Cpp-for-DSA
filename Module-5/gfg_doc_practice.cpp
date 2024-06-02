#include <bits/stdc++.h>
using namespace std;

void print_string(string s) // recieve string value and print
{
    cout << "Print from Print Function : " << s << endl;
}

int main()
{

    // String
    // C++ strings are sequence of text and character that stored in a char array. String are used to store word and text. They are also used for store data. Such as Number and other information. String variable create using string.To use string we need to inclue string header file ot bits/stdh++.h file

    // How to define a string in c++
    //-------------------------------
    // 1. using string keyword
    // Ex- string s = "hello C++";
    // Ex - string s("GeeksforGeeks");

    // Define and assign string value
    // string s = "Shakil Ahmed"; // Shakil Ahmed

    // declare and assign value
    // string str("This is shakil ahmed"); // This is shakil ahmed
    // cout << str << endl;

    // Store repited character using below method
    // string str(5, 'g'); // ggggg

    // How to take string input in c++
    // ----------------------------------
    // string s;
    // cin >> s; // Shakil
    // getline(cin, s); // Shakil Ahmed

    // How to Pass Strings to Functions
    //----------------------------------
    // string s = "Shakil Ahmed";
    // print_string(s); // called print string  function

    // Pointer and String
    //--------------------
    // Pointers are C++ are symbolic representative of address. By using pointer we can  get the first element of the string. which is the starting address of the string. The given string can be accessed and printed by the pointers

    // string s = "Shakil Ahmed ";

    // create a variable to store string first characters address
    // char *p = &s[0];

    // using while loop print string value 
    // while (*p != '\0')
    // {
    //     cout << *p << " ";
    //     p++;
    // }
    // cout << endl;

    return 0;
}