#include <iostream>
using namespace std;
template <typename T>
T myMax(T x, T y) { return (x > y) ? x : y; }

int myMax(int x, int y) { return (x > y) ? x : y; }
char myMax(char x, char y) { return (x > y) ? x : y; }
float myMax(float x, float y) { return (x > y) ? x : y; }
int main()
{
    cout << " Max of two int = " << myMax<int>(3, 7) << " ";
    cout << "\n Max of two char = " << myMax<char>('g', 'e') << " ";
    // cout << "\n Max of two float = " << myMax<float>(2.3, 4.5) << " ";
    cout << "\n Max of two float = " << myMax<float>(2, 4.5) << " ";
}

//  Types of Template
// 1) Function Template
// 2) Class Template