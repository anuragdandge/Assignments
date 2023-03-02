#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    Base(int a)
    {
        x = a;
    }
    void print(){
        cout << this->x;
    }
};
int main()
{
    Base b(10);
    b.print();
}