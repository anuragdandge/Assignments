#include <iostream>
using namespace std;
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void merge(int arr[],int l, int mid , int r){
    int n1 = mid-l+1;
    int n2 = r-mid; 
    int a[n1]; 
    int b[n2]; 
    for( int i = 0 ; i < n1 ; i ++){
        a[i] = arr[i]  
    }
}
int main()
{
    int arr[] = {6, 3, 7, 4, 9, 1, 2, 0};
    int r = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    mergeSort(arr, l, r);
}