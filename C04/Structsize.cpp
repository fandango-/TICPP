/*
 * Ex 4.20
 * Structsize.cpp
 */


#include <iostream>
using namespace std;

struct A
{
    int i[100];
};

struct B
{
    char c, d, e;
    void f();
};

void
B::f()
{
}

struct C
{
};

int
main(int argc, char **argv)
{
    cout << "sizeof struct A = " << sizeof(A) << " bytes" << endl;
    cout << "sizeof struct B = " << sizeof(B) << " bytes" << endl;
    /* struct C has a non-zero size because if its size was zero, then its
     * address would be same as the address of the object created directly after
     */
    cout << "sizeof struct C = " << sizeof(C) << " bytes" << endl;
    return 0;
}
