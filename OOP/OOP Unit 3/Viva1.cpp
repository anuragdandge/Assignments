#include <iostream>
using namespace std;
class Demo
{
    int num;

public:
    Demo(int a)
    {
        num = a;
    }
    friend void operator++(Demo d);
    void disp()
    {
        cout << num;
    }
};
void operator++(Demo d)
{
    int n;
    n = d.num+1;
    cout << "\n After Overloading " <<  n;
}
int main()
{
    Demo d1(10);
    d1.disp();
    ++d1;
}