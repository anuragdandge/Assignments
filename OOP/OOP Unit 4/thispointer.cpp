// "this" can be used to pass current object as a parameter to another method
// it can used to refer current instance variable
#include <iostream>
using namespace std;
class Demo
{
    int a = 10;

public:
    Demo() {}
    Demo(int x)
    {
        a = x;
    }
    void putData(Demo);
    Demo func(Demo &d);
};
void Demo::putData(Demo d)
{
    cout << " Greater Number  = " << d.a;
}
Demo Demo::func(Demo &d)
{
    if (this->a > d.a)
        return *this;
    else
        return d;
}
int main()
{
    Demo d1(15);
    Demo d2(25);
    Demo d3;
    d3 = d1.func(d2);
    d3.putData(d3);
}