// 2. Write a C++ program to sort an array in ascending order using function template.
#include <iostream>
using namespace std;
template <class T>
void SortArray(T arr[], int s)
{

    for (int i = 0; i < s; i++)
    {
        for (int j = i; j < s; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\n";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int iarr[] = {23, 45, 12, 54, 22, 77, 55, 98, 79, 90};
    char carr[] = {'q','w','e','r','t','y','u','i','o','p'};
    int size = sizeof(iarr) / sizeof(iarr[0]);
    SortArray(iarr, size);
    SortArray(carr, size);
}

// Output : 

// 12 22 23 45 54 55 77 79 90 98
// e i o p q r t u w y