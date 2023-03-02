// Example of Virtual Function 
#include <iostream>
using namespace std;
class Base
{

public:
    virtual void func()
    {
        cout << " Hello Base ";
    }
};
class Derived : public Base
{
public:
    void func()
    {
        cout << " Hello Derived";
    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->func();
}