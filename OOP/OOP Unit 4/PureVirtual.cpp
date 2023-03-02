// Example of Virtual Function 
#include <iostream>
using namespace std;
class Base
{

public:
    virtual void func() = 0 ;
};
class Derived : public Base
{
public:
    void func()
    {
        cout << " Derived Class is Derived From the Base Class";
    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->func();
}