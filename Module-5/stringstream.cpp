#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    // stringstream ss(s);
    stringstream ss;
    ss << s;
    // declare word to store word from sentence 
    string word;
 
    while (ss >> word) // string word sent ss to word  instill sentence end
    {
        // print word 
        cout << word << endl;
    }
    
     
    return 0;
}