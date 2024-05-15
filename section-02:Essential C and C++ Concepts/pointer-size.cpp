#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout << "Size of int pointer is " << sizeof(p1) << endl;
    cout << "Size of char pointer is " << sizeof(p2) << endl;
    cout << "Size of float pointer is " << sizeof(p3) << endl;
    cout << "Size of double pointer is " << sizeof(p4) << endl;
    cout << "Size of struct pointer is " << sizeof(p5) << endl;

    // Size of int pointer is 8 (bytes) because the size of an integer is 4 bytes and the size of a pointer is 8 bytes
}