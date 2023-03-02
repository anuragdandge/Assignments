// 1. Write a C++ program for Exception Handling Divide by zero Using C++ Programming
#include <iostream>
using namespace std;
int main()
{
    int num, den;
    try
    {
        cout << " Enter Numerator ";
        cin >> num;
        cout << " Enter Denominator ";
        cin >> den;
        if (den != 0)
        {
            cout << " Division = " << num / den;
        }
        else
        {
            throw(den);
        }
    }
    catch (int den)
    {
        cout << " Denominator is " << den;
    }
}

// Output :
//  Enter Numerator 10
//  Enter Denominator 0
//  Denominator is 0
//  Enter Numerator 20
//  Enter Denominator 10
//  Division = 2