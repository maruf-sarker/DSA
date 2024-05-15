#include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;
    cout << "Area of rectangle is " << r.length * r.breadth << endl;

    struct Rectangle r1 = {10, 5};
    cout << "Area of rectangle is " << r1.length * r1.breadth << endl;
}