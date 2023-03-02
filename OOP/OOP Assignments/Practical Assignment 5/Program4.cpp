// 4. Write a C++ program to make a simple calculator using class template.
#include <iostream>
using namespace std;
template <class T>
class Cal
{
    T a, b, op;

public:
    Cal(T x, T y, T c)
    {
        a = x;
        b = y;
        op = c;
    }
    void Calculate()
    {
        if (op == '+')
        {
            cout << "\n Addition = " << a + b;
        }
        else if (op == '-')
        {
            cout << "\n Subtraction = " << a - b;
        }
        else if (op == '*')
        {
            cout << "\n Multiplication = " << a * b;
        }
        else if (op == '/')
        {
            cout << "\n Division = " << a / b;
        }
        else
        {
            cout << " Invalid Operator ";
        }
    }
};
int main()
{
    Cal<int> ia(2, 3, '+');
    Cal<float> fs(4.5, 2.3, '-');
    Cal<float> fm(4.5, 2.3, '*');
    Cal<int> id(4, 2, '/');
    ia.Calculate();
    fs.Calculate();
    fm.Calculate();
    id.Calculate();
}

//  Output : 


//  Addition = 5
//  Subtraction = 2.2
//  Multiplication = 10.35
//  Division = 2