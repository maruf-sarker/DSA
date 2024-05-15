#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Data Structures and Algorithms";

    // upperToLower and lowerToUpper functions
    for(auto &i : s){
        if(i >= 'A' && i <= 'Z') i += 32;
        else if(i >= 'a' && i <= 'z') i -= 32;
    }
    cout << "Upper to Lower and Lower to Upper: " << endl << s << endl;

    // lowercase
    s = "Data Structures and Algorithms";
    for(auto &i : s){
        if(i >= 'A' && i <= 'Z') i += 32;
    }
    cout << "Lowercase: " << s << endl;

    // uppercase
    s = "Data Structures and Algorithms";
    for(auto &i : s){
        if(i >= 'a' && i <= 'z') i -= 32;
    }
    cout << "Uppercase: " << s << endl;
}