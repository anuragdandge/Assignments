#include <iostream>
using namespace std;
inline int large(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int num1, num2, num3;
    cout << " Enter 3  Number : ";
    cin >> num1 >> num2 >> num3;
    cout << "Largest = " << large(num1, num2, num3);
}