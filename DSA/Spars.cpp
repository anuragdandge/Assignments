#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], nonzero;
    cout << " Enter Elements ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << " Matrix Elemets : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    // Loop For Counting nonzero elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0)
            {
                nonzero++;
            }
        }
    }
    cout << " Non Zero Elements are = " << nonzero;
    int spars[nonzero][3];
    for (int i = 0; i < nonzero; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != 0)
            {
                spars[0][j] = i;
                spars[1][j] = j;
                spars[2][j] = arr[i][j];
                // cout << " \n I = " << i << "\t J = " << j << "\t Element = " << arr[i][j] << "\n";
            }
        }
    }
    cout << "\n Spars Matrix = \n";
    for (int i = 0; i < nonzero; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << spars[i][j] << " ";
        }
        cout << "\n";
    }
}