/*

Write A Class " Point " with 'x' & 'y' coordinates as data members.
Derive two class " Line " & " Circle " from " Point " with appropriate data members.
Derive class "Triangle" form class "Line".
Implement read() and display() functions for all classes.

*/
#include <iostream>
using namespace std;
class Point
{
public:
    float x, y;
    // public : Point(int x ,int y){
    // }
};
class Line : public Point
{
public:
    void read()
    {
        cout << "Enter Coordinates For Line : ";
        cin >> x >> y;
    }
    void draw()
    {
        cout << "Entered Coordinates For Line are : \n"
             << "x = " << x << "\ty = " << y;
    }
};
class Triangle : public Line
{
public:
    void read()
    {
        cout << "Enter Coordinates For Triangle  : ";
        cin >> x >> y;
    }
    void draw()
    {
        cout << "\nEntered Coordinates For Triangle are : \n"
             << "x = " << x << "\ty = " << y;
    }
};
int main()
{
    Line l;
    Triangle t;
    l.read();
    t.read();
    l.draw();
    t.draw();
}