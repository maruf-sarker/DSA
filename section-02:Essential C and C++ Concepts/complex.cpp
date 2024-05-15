#include <bits/stdc++.h>
using namespace std;

struct Complex{
    int real;
    int imag;
};

int main(){
    struct Complex c;
    c.real = 10;
    c.imag = 5;
    cout << "Real part is " << c.real << " and Imaginary part is " << c.imag << endl;

    struct Complex c1 = {10, 5};
    cout << "Real part is " << c1.real << " and Imaginary part is " << c1.imag << endl;
}