#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
    void print()
    {
        cout << "\n A = " << a;
    }
};
class B
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
    void print()
    {
        cout << "\n B = " << b;
    }
};
class C : public A, public B
{
protected:
    int c;

public:
    void Add()
    {
        A::print();
        B::print();
        cout << "\n Addition  = " << a + b;
    }
};

int main()
{
    C c;
    c.get_a(10);
    c.get_b(20);
    c.Add();
}