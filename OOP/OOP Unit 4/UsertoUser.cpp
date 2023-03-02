#include <iostream>
using namespace std;
class A
{
    int a;
public:
    int get_Num()
    {
        cout << "Enter a number for A : ";
        cin >> a;
        return a;
    }
    void disp(){ cout << a;}
};
class B
{
    int b;
public:
    void operator=(A aa)
    {
        b = aa.get_Num();
    }
    void disp()
    {
        cout << " Value of B = " << b;
    }
};
int main()
{
    A a;
    B b;
    b = a;
    b.disp();
}