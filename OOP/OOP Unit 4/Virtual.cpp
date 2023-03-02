#include <iostream>
using namespace std;
class Shape
{

public:
    virtual void draw()
    {
        cout << "\nDrawing.\n";
    }
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << " Drawing Rectangle\n";
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << " Drawing Circle\n";
    }
};
int main()
{
    Shape *s;
    Shape sh;
    Rectangle rec;
    Circle cir;
    s = &sh;
    s->draw();
    s = &rec;
    s->draw();
    s = &cir;
    s->draw();
}