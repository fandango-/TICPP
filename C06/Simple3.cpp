/*
 * Ex 6.3
 * Simple3.cpp
 */


#include <iostream>
using namespace std;

class Simple
{
    int i;
  public:
      Simple(int);
     ~Simple();
};

Simple::Simple(int x)
{
    i = x;
    cout << "Simple constructor called. Value of i is: " << i << endl;
}

Simple::~Simple()
{
    cout << "Simple destructor called. Value of i is: " << i << endl;
}

int
main(int argc, char **argv)
{
    Simple s(4);
    return 0;
}
