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
    void operator ++()
    {
        num++;
    }
    void disp(){
        cout << num ;
    }
};
int main(){
    Demo d1(10);
     cout << "\n Before Overloading " ;
    d1.disp();
    ++d1;
     cout << "\n After Overloading " ;
    d1.disp();
}
