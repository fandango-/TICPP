/*
 * Ex 11.4
 * Pointerref.cpp
 */


#include <iostream>
using namespace std;

int &
f(int * ptr) {
    *ptr = 4;
    return *ptr;
}

int
main(int argc, char ** argv) {
    int x = 1;
    cout << "Value of x before calling f(): " << x << endl;
    int & y = f(&x);
    cout << "Value of x after calling f(): " << x << endl;
    cout << "Value of y after calling f(): " << y << endl;
    y = 10;
    cout << "Value of x after assignment: " << x << endl;
    cout << "Value of y after assignment: " << y << endl;
    return 0;
}
