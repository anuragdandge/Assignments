#include <iostream>
using namespace std;
class Base1
{
private:
    int a = 10;

public:
    void show()
    {
        cout << " From Base 1 " <<  a;
    }
};
class Base2
{
private:
    int b = 10;

public:
    void show()
    {
        cout << "\n From Base 2 " << b;
    }
};

class Derived : protected Base1,protected Base2
{

public:
    void Print()
    {
        Base1::show();
        Base2::show();
        // cout << a;
    }
};
int main()
{
    Derived d;
    d.Print();

}