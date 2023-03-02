#include <iostream>
using namespace std;
template <class T1, class T2>
void swap(T1 a, T2 b)
{
    cout << "\nBefore Swap  A = " << a << ", B = " << b;
    int c = a ; 
    a = b ;
    b = c ;  
    cout << "\nAfter Swap  A = " << a << ", B = " << b;
    cout << endl;
}
int main()
{
    swap(3.2, 2);
    swap('a','b');
}