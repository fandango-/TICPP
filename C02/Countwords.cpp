/*
 * Ex 2.3
 * Countwords.cpp
 */


#include <iostream>
#include <fstream>
#include "../require.h"
using namespace std;

int
main(int argc, char ** argv) {
    requireArgs(argc, 1);
    ifstream in(argv[1]);
    string word;
    int count = 0;

    while (in >> word) {
        count++;
    }

    cout << "Number of whitespace-separated words in " << argv[1] << " is: " <<
         count << endl;
    return 0;
}
