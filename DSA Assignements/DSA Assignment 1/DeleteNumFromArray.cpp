
#include <iostream>
using namespace std;
int main()
{
    int size = 5, num = 0, j = 0;

    int arr[size] = {
        2,
        4,
        6,
        7,
        8,
    };
    cout << " Enter a Number you want to delete ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            for (int k = i; k < size; k++)
            {
                arr[k] = arr[k + 1];
            }
            arr[size] = 0;
            break;
        }
        else
        {
            cout << num << " Number is Not Present is Array";
            break;
        }
    }
    
    cout << "\n Array ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

}
