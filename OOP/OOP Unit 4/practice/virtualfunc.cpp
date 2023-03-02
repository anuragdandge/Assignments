#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    Base(int a)
    {
        x = a;
    }
    friend int print();
};
int print(Base b)
{
    return b.x;
}
int main()
{
    Base b(10);
    cout << print();
}