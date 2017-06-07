/*
 * Ex 11.8
 * Charref.cpp
 */


#include <iostream>
using namespace std;

void
f(char &c)
{
    c = 'h';
}

int
main(int argc, char **argv)
{
    char ch = 'a';
    cout << "Value of ch before calling f(): " << ch << endl;
    f(ch);
    /* IMO, this behaviour reduces program readability as programmer doesn't
     * expect the change of value without passing addresses explicitly
     */
    cout << "Value of ch after calling f(): " << ch << endl;
    return 0;
}
