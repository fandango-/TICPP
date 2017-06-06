/*
 * Ex 6.2
 * Simple2.cpp
 */


#include <iostream>
using namespace std;

class Simple
{
  public:
    Simple();
    ~Simple();
};

Simple::Simple()
{
    cout << "Simple constructor called" << endl;
}

Simple::~Simple()
{
    cout << "Simple destructor called" << endl;
}

int
main(int argc, char **argv)
{
    Simple s;
    return 0;
}
