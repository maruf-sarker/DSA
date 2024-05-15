#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Data Structures and Algorithms";

    // way 1
    string rev = "";
    for(int i = s.length()-1; i >= 0; i--) rev += s[i];
    cout << "Original string: " << s << endl;
    cout << "Reversed string: " << rev << endl;

    // way 2
    cout << "Original string: " << s << endl;
    for(int i = 0, j = s.length()-1; i < j; i++, j--) swap(s[i], s[j]);
    cout << "Reversed string: " << s << endl;

    // way 3
    s = "Data Structures and Algorithms";
    cout << "Original string: " << s << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed string: " << s << endl;
}