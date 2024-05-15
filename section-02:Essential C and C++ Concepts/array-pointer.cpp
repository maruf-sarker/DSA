#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; // p is pointing to the address of arr[0]

    cout << "Value of p is " << *p << endl;

    for(int i = 0; i < 5; i++){
        cout << "Value of p is " << *p << endl;
        p++;
    }

    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}