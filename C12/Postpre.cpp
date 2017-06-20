/*
 * Ex 12.1
 * Postpre.cpp
 */


#include <iostream>
using namespace std;

class Integer {
    int i;
  public:
    Integer(int ii = 0): i(ii) {
    }
    const Integer & operator++() {
        i++;
        return *this;
    }
    const Integer operator++(int) {
        Integer before(i);
        i++;
        return before;
    }
    friend ostream & operator<<(ostream & os, const Integer & integer) {
        os << integer.i;
        return os;
    }
};

int
main(int argc, char ** argv) {
    Integer a(1);
    cout << "Before ++a: " << a << endl;
    cout << "During ++a: " << ++a << endl;
    cout << "After ++a and before a++: " << a << endl;
    /* If no postfix operator is defined, we get error: no ‘operator++(int)’
     * declared for postfix ‘++’ [-fpermissive]
     */
    cout << "During a++: " << a++ << endl;
    cout << "After a++: " << a << endl;
    return 0;
}
