#include <iostream>
using namespace std;
template <class T>
class demo
{
    T a, b, temp;

public:
    demo(T x, T y)
    {
        a = x;
        b = y;
    }
    void swap()
    {

        cout << "\n Before Swap  A = " << a << ", B  = " << b << endl;
        temp = a;
        a = b;
        b = temp;
        cout << " After Swap  A = " << a << ", B  = " << b << endl;
    }
};
int main()
{
    demo<int> d(5, 3);
    demo<float> d1(4.8, 9.2);
    demo<char> d2('A', 'Z');
    d.swap();
    d1.swap();
    d2.swap();
}