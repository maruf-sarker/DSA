#include <bits/stdc++.h>
using namespace std;

bool valid (string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') continue;
        else if(s[i] >= 'A' && s[i] <= 'Z') continue;
        else if(s[i] == ' ') continue;
        else return false;
    }

    return true;
}

int main(){
    string s = "Dat@ Structures & @lgorithms";
    // s = "Data Structures and Algorithms";
    
    if(valid(s)) cout << "Valid string" << endl;
    else cout << "Invalid string" << endl;
}