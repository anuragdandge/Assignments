#include <iostream>
using namespace std;
template <class T1,class T2 >
T1 add(T1 a, T2 b)
{
    T1 result = a + b;
    return result;
}
int main()
{
    cout << " Addition of Float & Int = " << add(2.4,3);
    cout << "\n Addition of Int & Float = " << add(2,4.3);
}