#include <bits/stdc++.h>
using namespace std;

class Bike{
    public:
    char color[100];
    int speed;
    int length;
};

int main(){

    Bike suzuki, royel;
    cin.getline(suzuki.color, 100);
    cin>> suzuki.speed >> suzuki.length;
    getchar();
    cin.getline(royel.color, 100);
    cin>> royel.speed >> royel.length;

    cout << suzuki.color <<  " " << suzuki.speed << " " <<suzuki.length << endl;
    cout <<royel.color <<  " " << royel.speed << " " <<royel.length << endl;

    return 0;
}