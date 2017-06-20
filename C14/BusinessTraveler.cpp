/*
 * Ex 14.14
 * BusinessTraveler.cpp
 */


#include <iostream>
using namespace std;

class Traveler {
    string str;
  public:
    Traveler(string s): str(s) {
    }
    Traveler(const Traveler & t): str(t.str) {
    }
    Traveler & operator=(const Traveler & t) {
        str = t.str;
        return *this;
    }
    friend ostream & operator<<(ostream & os, const Traveler & t) {
        return os << "Traveler: " << t.str;
    }
};

class Pager {
    string str;
  public:
    Pager(string s): str(s) {
    }
    Pager(const Pager & p): str(p.str) {
    }
    Pager & operator=(const Pager & p) {
        str = p.str;
        return *this;
    }
    friend ostream & operator<<(ostream & os, const Pager & p) {
        return os << "Pager: " << p.str;
    }
};

class BusinessTraveler: public Traveler {
    Pager p;
  public:
    BusinessTraveler(): Traveler(""), p("") {
    }
    BusinessTraveler(string s): Traveler(s), p(s) {
    }
    BusinessTraveler(const BusinessTraveler & bt): Traveler(bt), p(bt.p) {
    }
    BusinessTraveler & operator=(const BusinessTraveler & bt) {
        Traveler::operator=(bt);
        p = bt.p;
        return *this;
    }
    friend ostream & operator<<(ostream & os, const BusinessTraveler & bt) {
        return os << "BusinessTraveler: " << endl << (Traveler &) bt << endl <<
               bt.p;
    }
};

int
main(int argc, char ** argv) {
    BusinessTraveler bt, bt2("xyz");
    cout << "default" << endl << bt << endl;
    cout << "one argument" << endl << bt2 << endl;
    BusinessTraveler bt3 = bt2;
    cout << "copy constructor" << endl << bt3 << endl;
    bt2 = bt;
    cout << "operator=" << endl << bt2 << endl;
    return 0;
}
