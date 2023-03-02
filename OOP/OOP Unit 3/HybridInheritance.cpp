#include <iostream>
using namespace std;
class Student
{
protected:
    int a;

public:
    void get_a()
    {
        cout << " Enter a Value of A ";
        cin >>a ;
    }
};
class B : public A
{
protected:
    int b;

public:
    void get_b()
    {
        cout << " Enter a Value of B ";
        cin >> b ;
    }
};
class C
{
protected:
    int c;

public:
    void get_c()
    {
        cout << " Enter a Value of C ";
        cin >> c ;
    }
};
class D : public B, public C
{

public:
    void Multiplication()
    {
        get_a();
        get_b();
        get_c();
        cout << "\n Multiplication  = " << a * b * c;
    }
};

int main()
{
    D d;
    d.Multiplication();
}