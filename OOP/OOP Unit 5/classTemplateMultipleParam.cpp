#include <iostream>
using namespace std;
template <class T1, class T2>
class demo
{
    T1 a, b, temp;
public:
    demo(T1 x, T2 y){
        a = x;
        b = y;
    }
    void swap(){
        cout << "\n Before Swap  A = " << a << ", B  = " << b << endl;
        temp = a;
        a = b;
        b = temp;
        cout << " After Swap  A = " << a << ", B  = " << b << endl;
    }
};
int main(){
    demo<int, float> d(5, 3.4);
    demo<float, int> d1(2.3, 4);
    d.swap();
    d1.swap();
}