/*
 * Ex 9.1
 * Fmacro.cpp
 */


#include <iostream>
using namespace std;

#define F(x) (x + 1)            // wrong
#define F1(x) ((x) + 1)         // correct

int
main(int argc, char ** argv) {
    int a = 0x0f, b = 0x07;
    cout << F(a >= b ? 0 : 1) << endl;
    cout << F1(a >= b ? 0 : 1) << endl;
    return 0;
}
