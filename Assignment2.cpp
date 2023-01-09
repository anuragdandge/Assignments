// Write a program to derive a class rectangle from base class shape using single inheritance.

#include <iostream>
using namespace std;
class Shape
{
public:
    void Rectangle();
};

class Rectangle : public Shape
{
public:
    Rectangle()
    {
        cout << " Formula : Area = width * length  ";
        cout << " \n  It has four sides and four vertices ";
        cout << " \n  Each vertex has angle equal to 90 degrees ";
        cout << " \n  The opposite sides are equal and parallel ";
        cout << " \n  Diagonal bisect each other ";
    }
};

int main()
{
    Rectangle rect;
}
