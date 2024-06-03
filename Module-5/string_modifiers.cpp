#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string a = "Hello";
    // string b = "World";

    // a= a+b;
    // a+=b; // append string to this string
    // a.append(b); // inside of a append b

    // append character in last index of string
    // a = a + 'X';
    // a.push_back('X'); // HelloX

    // remove character in last index of string
    // a.pop_back(); // Hello

    // Assign
    // a = "gelo";
    // a.assign("Gelo");

    // from string remove a portion
    //----------------------------- 
    // string a = "Helloworld";
    // a.erase(4); // if i sent just one parameter Including this number remove all character in string
    //a.erase(4, 3); // Hellworld  // first parameter start index, second parameter contain how much character You want to delete

    // replace = erase+append
    //------------------------
    // string a = "HelloWorld";
    // a.replace(4,3,"eye"); // 4,3 means - erase this part, "eye" means - replace with this
    // cout << a << endl; // Helleyerld


    // Insert - insert a portion in a specific portion in array
    //------------------------
    string a = "HelloWorld";
    // a.replace(5,0,"Shakil");
    // a.insert(5, "Shakil"); 
    cout << a << endl; // HelloShakilWorld

    return 0;
}