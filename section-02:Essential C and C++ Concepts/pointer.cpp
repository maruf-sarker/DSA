#include <bits/stdc++.h>
using namespace std;

// to access the heap memory we use pointers

int main(){
    int *p;
    p = new int; // new is used to allocate memory in heap
    *p = 10;

    cout << "Value of p is " << *p << endl;
    cout << "Address of p is " << p << endl;

    delete p; // to deallocate memory in heap

    int a = 10;
    int *b;
    b = &a; // p is pointing to the address of a
    cout << "Value of a is " << b << endl;
}