#include <iostream>
using namespace std;
template <class X, class Y>
void fun(X a, Y b)
{
    X temp;
    temp = a + b;
    cout << "\n Addition of Numbers  = " << temp;
}
template <class C>
void fun(C a)
{

    cout << "\n Entered Character  = " << a;
}

int main()
{
    fun(10,20);
    fun(5.2,4.1);
    fun('C');
}