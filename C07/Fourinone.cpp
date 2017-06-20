/*
 * Ex 7.4
 * Fourinone.cpp
 */


class Four {
  public:
    void f();
    void f(int);
    void f(int, int);
    void f(int, int, int);
};

void
Four::f() {
}

void
Four::f(int) {
}

void
Four::f(int, int) {
}

void
Four::f(int, int, int) {
}

class One {
  public:
    void f(int = 0, int = 0, int = 0);
};

void
One::f(int, int, int) {
}

int
main(int argc, char ** argv) {
    // old style
    Four four;
    four.f();
    four.f(1);
    four.f(1, 2);
    four.f(1, 2, 3);
    // new style
    One one;
    one.f();
    one.f(1);
    one.f(1, 2);
    one.f(1, 2, 3);
    return 0;
}
