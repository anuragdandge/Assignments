#include <iostream>
using namespace std;
void LinearSearch(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "\n " << key << " Present at " << i << " index ";
        }
    }
}
int main()
{
    int arr[] = {4, 5, 2, 8, 1, 0, 6, 7, 3, 9, 31, 22, 24,
                 63, 79, 54, 28, 76, 53, 77, 16, 43, 97, 60,
                 15, 55, 23, 68, 29, 33, 56, 19, 90, 87, 99,
                 75, 36, 95, 94, 74, 62, 38, 27, 25, 61, 71,
                 51, 20, 72, 70, 46, 86, 42, 59, 57, 82, 64,
                 65, 91, 12, 89, 81, 35, 80, 11, 98, 47, 40,
                 85, 44, 13, 32, 78, 66, 18, 50, 37, 83, 26,
                 49, 45, 67, 92, 30, 52, 96, 69, 41, 48, 21,
                 58, 88, 73, 14, 10, 34, 39, 17, 93, 84};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 20;
    LinearSearch(arr, key, size);
}
