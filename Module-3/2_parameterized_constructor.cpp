#include <bits/stdc++.h>
using namespace std;

class Parameterrized_construtor{
    public:
    int x, y;

    // declare parameterised constructor 
    Parameterrized_construtor( int x1, int y1){
        x = x1;
        y = y1;
    }

    int getX() {return x;}
    int getY() {return y;}
};

int main(){
    Parameterrized_construtor p1(10, 20);
    Parameterrized_construtor p2(30, 40);

    cout <<" p1.x = "<<p1.getX() << endl; 
    cout <<" p1.y = "<<p1.getY() << endl; 
    cout <<" p2.x = "<<p2.getX() << endl; 
    cout <<" p2.y = "<<p2.getY() << endl; 
 
    
    return 0;
}