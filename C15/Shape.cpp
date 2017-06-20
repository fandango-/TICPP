/*
 * Ex 15.1
 * Shape.cpp
 */


#include <iostream>
using namespace std;

class Shape {
  public:
    virtual void draw() {
        cout << "Shape draw()" << endl;
    }
};

class Circle: public Shape {
  public:
    void draw() {
        cout << "Circle draw()" << endl;
    }
};

class Square: public Shape {
  public:
    void draw() {
        cout << "Square draw()" << endl;
    }
};

class Triangle: public Shape {
  public:
    void draw() {
        cout << "Triangle draw()" << endl;
    }
};

int
main(int argc, char ** argv) {
    Shape * shapes[] = { new Shape, new Circle, new Triangle, new Square };

    for (Shape * shape : shapes) {
        shape->draw();
        delete shape;
    }

    return 0;
}
