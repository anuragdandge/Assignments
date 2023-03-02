// 3. Define a class containing operator function to overload unary minus (‘-‘)  operator.

#include <iostream>
using namespace std;
class Test
{
private:
    int num;

public:
    Test(int n)
    {
        num = n;
    }

    void operator--()
    {
        num--;
    }
    void Print()
    {
        cout << "\n Number = " << num;
    }
};

int main()
{
    Test t1(10);
    t1.Print();
    --t1;
    t1.Print();
}