#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Data Structures and Algorithms";
    int len = 0;

    // way 1
    for(auto i : s) len++;
    cout << "Length of the string is " << len << endl;

    // way 2
    len = 0;
    len = s.length();
    cout << "Length of the string is " << len << endl;

    // way 3
    len = 0;
    len = s.size();
    cout << "Length of the string is " << len << endl;

    // way 4
    len = 0;
    for(int i = 0; s[i] != '\0'; i++) len++;
    cout << "Length of the string is " << len << endl;

    // way 5
    len = 0;
    while(s[len] != '\0') len++;
    cout << "Length of the string is " << len << endl;
}