//  Create a base class shape. Derive two classes as Triangle and Rectangle from the base class shape. Take getdata() and display_area() as member functions of base class. Make display_area() as a virtual function and redefine it in derived classes to suit their requirement. Design a program that will accept dimensions of a triangle or rectangle interactively and display the area.

#include <iostream>
using namespace std;
class Shape
{
protected:
    float l, b;

public:
    void getData(float x, float y)
    {
        l = x;
        b = y;
    }
    virtual void display_area() = 0;
};
class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << " Area of Rectangle = " << l * b;
    }
};
class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "\n Area of Triangle = " << 0.5 * (l * b);
    }
};
int main()
{
    Shape *sptr;
    Rectangle r;
    sptr = &r;
    sptr->getData(5.5, 6.5);
    sptr->display_area();
    Triangle t;
    sptr = &t;
    sptr->getData(5.5, 8.5);
    sptr->display_area();
}