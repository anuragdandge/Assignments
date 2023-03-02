// Write an Inline func in c++ to find odd & even numbers from set of giver numbers (make use of array)

#include <iostream>
using namespace std;
inline void OddEven(int arr[], int range)
{
    for (int i = 0; i < range; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "\n"
                 << arr[i] << " is Even.";
        }
        else
        {
            cout << "\n"
                 << arr[i] << " is Odd.";
        }
    }
}
int main()
{
    int range;
    cout << " Enter Range : ";
    cin >> range;
    int arr[range];
    for (int i = 0; i < range; i++)
    {
        cin >> arr[i];
    }
    OddEven(arr, range);
}
