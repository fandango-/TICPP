/*
 * Ex 4.17
 * Dynamicalloc.cpp
 */


#include <iostream>
using namespace std;

int
main(int argc, char **argv)
{
    int *intptr = new int;
    long *longptr = new long;
    char *chararr = new char[100];
    float *floatarr = new float[100];
    cout << intptr << endl << longptr << endl << static_cast <
        void *>(chararr) << endl << floatarr << endl;
    delete intptr;
    delete longptr;
    delete[]chararr;
    delete[]floatarr;
    return 0;
}
