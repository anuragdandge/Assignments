#include <iostream>
using namespace std;
int main()
{
    int arr[10], maxNumber = 0, minPos = 0, maxPos = 0, minNumber = INT_MAX;
    cout << "\nEnter 10 Array Elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    // Loop to find max & Min
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
            maxPos = i;
        }
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
            minPos = i;
        }
    }
    arr[maxPos] = minNumber;
    arr[minPos] = maxNumber;
    cout << "\nMax = " << maxNumber;
    cout << "\nMin = " << minNumber;
    cout << "\nNewly formed Array : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}