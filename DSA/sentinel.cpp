#include <iostream>
using namespace std;
void sentinelSearch(int arr[], int key, int n)
{
    int last = arr[n - 1]; // Storing the Last Element
    arr[n - 1] = key;      // Replacing the Last Element with the Key
    int i = 0;             // Counter Variable

    if ((last == key))  // 1
    {
        cout << "\n " << key << " Present at " << n - 1 << " index {}";
    }
    else if (arr[i] == key)  // 2
    {
        cout << "\n " << key << " Present at " << i << " index {}";
    }
    else
    {
        while (arr[i] != key)
        {
            i++; // Increasing Counter
        }
        arr[n - 1] = last; // Replacing back the last element which was stored in auxilary variable
        if ((i < n - 1) || arr[n - 1] == key) // 3
        {
            cout << "\n " << key << " Present at " << i << " index []";
        }
        else
        {
            cout << " Element Not Present ";
        }
    }
}
int main()
{
    // int arr[] = {2, 3, 4, 63, 4, 65, 7, 44, 23, 20};
    // int arr[] = {4, 5, 2, 8, 1, 0, 6, 7, 3, 9, 31, 22, 24, 63, 79, 54, 28, 76, 53, 77, 16, 43, 97, 60, 15,
    //              55, 23, 68, 29, 33, 56, 19, 90, 87, 99, 75, 36, 95, 94, 74, 62, 38, 27, 25, 61, 71, 51, 20, 72, 70, 46,
    //              86, 42, 59, 57, 82, 64, 65, 91, 12, 89, 81, 35, 80, 11, 98, 47, 40, 85, 44, 13, 32, 78, 66, 18, 50, 37, 83,
    //              26, 49, 45, 67, 92, 30, 52, 96, 69, 41, 48, 21, 58, 88, 73, 14, 10, 34, 39, 17, 93, 84};

    int size = sizeof(arr) / sizeof(arr[0]);
    // int key = 2;
    // int key = 20;
    int key = 40;
    sentinelSearch(arr, key, size);
}

// for( int i = 0 ; i < n ; i++ ){

//     if(arr[i] == key) {

//         return i;

//     }

// }

// int i = 0;

// last = arr[n-1];

// arr[n-1] = key ;

// while (  arr[i] != key  ) {

//     i++;

// }

// if( ( i < n-1 )  ||  arr[n-1] == key ){

//     cout << " Present at " << i ;

// }else {

//     cout << " Not Present ";

// }
