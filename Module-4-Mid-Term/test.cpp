#include <bits/stdc++.h>
using namespace std;

 

class Student {
    public:
    int id;
    char name[1001];
    char section;
    int math_mark;
};

int main() {
    int test;
    cin >> test;
    
    while (test--) {
        Student students[3];
        
        // take input object student 
        for (int i = 0; i < 3; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].math_mark;
        }
        
        // top student to compare others
        Student topStudent = students[0];
        
        for (int i = 1; i < 3; ++i) {
            if (students[i].math_mark > topStudent.math_mark) {
                topStudent = students[i];
            } else if (students[i].math_mark == topStudent.math_mark && students[i].id < topStudent.id) {
                topStudent = students[i];
            }
        }
        
        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.math_mark << endl;
    }
    
    return 0;
}
