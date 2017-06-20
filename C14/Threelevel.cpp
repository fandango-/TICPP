/*
 * Ex 14.3
 * Threelevel.cpp
 */


#include <iostream>
using namespace std;

class A {
  public:
    A() {
        cout << "Constructor for A called" << endl;
    }
    ~A() {
        cout << "Destructor for A called" << endl;
    }
};

class B: public A {
  public:
    B() {
        cout << "Constructor for B called" << endl;
    }
    ~B() {
        cout << "Destructor for B called" << endl;
    }
};

class C: public B {
  public:
    C() {
        cout << "Constructor for C called" << endl;
    }
    ~C() {
        cout << "Destructor for C called" << endl;
    }
};

int
main(int argc, char ** argv) {
    C c;
    // Order of calls is A, B, C for constructors and the reverse for destructors
    return 0;
}
