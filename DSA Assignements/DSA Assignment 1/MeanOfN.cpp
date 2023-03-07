#include <iostream>
using namespace std;
int main()
{
    int size,sum;
    cout << "Enter a Size of Array : ";
    cin >> size;
    int arr[size];
    cout << " Enter Array element ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } 
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    } 
    cout << " Mean =  " << (sum/size) ; 
}