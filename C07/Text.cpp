/*
 * Ex 7.1
 * Text.cpp
 */


#include <iostream>
#include <fstream>
#include "../require.h"
using namespace std;

class Text {
    string text;
  public:
    Text();
    Text(string);
    string contents();
};

Text::Text() {
}

Text::Text(string filename) {
    ifstream in(filename);
    string line;

    while (getline(in, line)) {
        text += text.empty() ? line : '\n' + line;
    }
}

string
Text::contents() {
    return text;
}

int
main(int argc, char ** argv) {
    requireArgs(argc, 1);
    string filename(argv[1]);
    Text text(filename);
    cout << text.contents() << endl;
    return 0;
}
