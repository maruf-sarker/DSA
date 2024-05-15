#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Data Structures  and  Algorithms";
    int words = 1;

    for(int i = 0; i < s.length(); i++)
        if(s[i] == ' ' && s[i+1] != ' ') words++;

    cout << "Number of words: " << words << endl;
}