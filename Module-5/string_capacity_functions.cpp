#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 1.string length or size
    //----------------------
    // cout << s.size() << endl; //string length - 11

    // 2. string max size
    //-------------------
    //  cout << s.max_size() << endl; // How much can store - 10^6

    // 3.string capacity
    // ------------------
    // string dandom_s = "I am a student of Phitron at Programming Hero";
    // cout << dandom_s.capacity() << endl;  // 45 capacity value depends on varibale can hold how much character. capacity increase dynamically variable size

    // 4. string clear - remove data from variable
    //--------------
    // string s = "Bjarne Stroustrup";
    // s.clear();
    // cout << s.size() << endl;
    // cout << s << endl;

    // 5.String Empty - If string is null - true otherwise false
    // empty() - just check length if lenth 0 return true otherwise false

    // string s; // Empty
    // string s = "Dejarne Stroustrup" ; //Not  Empty
    // if (s.empty() == true)  cout << "Empty" << endl;
    // else cout << "Not Empty" << endl;

    // string resize 
    //---------------
    // Resize can increment/decrement

    string s;
    cin>>s;
    // s.resize(5); // decrement
    // s.resize(8,'x'); // if i Increment the size of length then I should say after what character will store
    cout << s.size() << endl;
    cout << s << endl;



    

    return 0;
}