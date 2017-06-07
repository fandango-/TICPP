/*
 * Ex 11.3
 * Referrors.cpp
 */


#include <iostream>
using namespace std;

int
main(int argc, char **argv)
{
    // (1): error: ‘ref’ declared as reference but not initialized
    //~ int &ref;
    // (2)
    int a = 0, b = 1;
    int &x = a;
    x = b;
    b = 2;
    cout << "a: " << a << ", b: " << b << endl; // a = 1, b = 2
    // (3)
    int &y = *(int *) NULL;
    cout << &y << endl; // seems to work in g++ 6.3.1, but is undefined behavior
    return 0;
}
