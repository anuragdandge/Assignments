// Member function of class used to free up memory
// Destructor uses "~" tilde sign
// Used to free up space allocated by derived class object
#include <iostream>
using namespace std;
class Base{
public:
    Base()
    {
        cout << "\n Constructor of Base ";
    }
    virtual ~Base()
    {
        cout << "\n Destructor of Base ";
    }
};
class Derived : public Base{
public:
    Derived()
    {
        cout << "\n Constructor of Derived ";
    }
    ~Derived()
    {
        cout << "\n Destructor of Derived  ";
    }
};
int main()
{
    Base *b = new Derived;
    delete b;
}