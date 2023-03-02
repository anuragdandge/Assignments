#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    T result = a + b;
    return result;
}
int main()
{
    int i = 2;
    int j = 3;
    float m = 2.3;
    float n = 1.2;
    cout << " Addition pf i & j = " << add(i,j);
    cout << "\n Addition pf m & n = " << add(m, n);
}