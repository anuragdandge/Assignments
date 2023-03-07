#include <iostream>
using namespace std;
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + sum(num - 1);
}
int main()
{
    int res = sum(5);
    cout << res;
}