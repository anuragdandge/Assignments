#include <iostream>
using namespace std;
template <class T1, class T2>
void myMax(T1 a, T2 b){
    if (a > b){
        cout << "\n Bigger = " << a;
    }
    else{
        cout << "\n Bigger = " << b;
    }
}
int main()
{
    myMax(2, 3);
    myMax(2.3, 3.4);
}