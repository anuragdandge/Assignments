#include <iostream>
using namespace std;
template <class T >
class T{
    T x;
public:
    void setx()
    {
        cout << " Enter Value of x ";
        cin >> x ;
    }
    friend void show(class<T> t);
};
class num2
{
    int b;

public:
    num2(int j)
    {
        b = j;
    }
    void put()
    {
        cout << b;
    }
    friend void swap(num1 &, num2 &);
};
void swap(num1 &c, num2 &d)
{
    int x = c.a;
    c.a = d.b;
    d.b = x;
}
int main()
{
    num1 c(1);
    num2 d(2);
    c.put();
    d.put();
    swap(c, d);
    c.put();
    d.put();
}
