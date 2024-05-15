#include <bits/stdc++.h>
using namespace std;

struct Student{
    int roll;
    string name;
    int marks;
};

int main(){
    struct Student s;
    s.roll = 1;
    s.name = "John";
    s.marks = 90;
    cout << "Roll number is " << s.roll << ", Name is " << s.name << " and Marks are " << s.marks << endl;

    struct Student s1 = {2, "Jane", 95};
    cout << "Roll number is " << s1.roll << ", Name is " << s1.name << " and Marks are " << s1.marks << endl;
}