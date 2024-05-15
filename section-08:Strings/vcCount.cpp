#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, c;
    v = c = 0;

    string s = "Data Structures and Algorithms";

    for(auto i : s){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') v++;
        else if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) c++;
    }

    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << c << endl;
}