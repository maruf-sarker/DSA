#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle r = {10, 5};
    struct rectangle *p = &r;

    cout << "Length of rectangle is " << p->length << endl;
    cout << "Breadth of rectangle is " << p->breadth << endl;

    // dynamic memory allocation
    struct rectangle *q;
    // q = (struct rectangle *)malloc(sizeof(struct rectangle));
    q = new rectangle;
    q->length = 15;
    q->breadth = 10;

    cout << "Length of rectangle is " << q->length << endl;
    cout << "Breadth of rectangle is " << q->breadth << endl;
}
