// 3. Write a C++ program to swap a data using function template.
#include <iostream>
using namespace std;
template <class T1, class T2>
void Swap(T1 x, T2 y)
{
    T1 t;
    cout << "\n Before Swap " << x << "," << y;
    t = x;
    x = y;
    y = t;
    cout << "\n After Swap " << x << "," << y;
    cout << endl;
}

int main()
{
    Swap(2, 3);
    Swap(2.4, 3.2);
    Swap('d', 'c');
}

// Output : 

//  Before Swap 2,3
//  After Swap 3,2

//  Before Swap 2.4,3.2
//  After Swap 3.2,2.4

//  Before Swap d,c
//  After Swap c,d