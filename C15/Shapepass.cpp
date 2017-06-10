/*
 * Ex 15.3
 * Shapepass.cpp
 */


#include <iostream>
using namespace std;

class Shape
{
  public:
    virtual void draw() = 0;
};

void
Shape::draw()
{
    cout << "Shape draw()" << endl;
}

class Circle:public Shape
{
  public:
    void draw()
    {
        Shape::draw();
        cout << "Circle draw()" << endl;
    }
};

class Square:public Shape
{
  public:
    void draw()
    {
        Shape::draw();
        cout << "Square draw()" << endl;
    }
};

class Triangle:public Shape
{
  public:
    void draw()
    {
        Shape::draw();
        cout << "Triangle draw()" << endl;
    }
};

void
f( /* Compiler error: Shape shape */ Shape & shape)
{
    shape.draw();
}

int
main(int argc, char **argv)
{
    Shape *shapes[] =
        { /* Compiler error: new Shape, */ new Circle, new Triangle,
        new Square
    };
    for (Shape * shape:shapes)
    {
        f(*shape);
        delete shape;
    }
    return 0;
}
