#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of Matrix ";
    cin >> size;
    int A[size][size], NonZeroA = 0;
    // Getting Elements for A Matrix
    cout << "Enter Elements for Matrix :\n ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> A[i][j];
        }
    }
    // Printing Elements for A Matrix
    cout << " Elements of Matrix :\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << A[i][j] << " ";
        }
        cout << "\n";
    }
    // Counting NonZero Elements for A Matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[i][j] != 0)
            {
                NonZeroA++;
            }
        }
    }
    // Inserting NonZero Elements and their positions in SparsMatrixA
    cout << "\nNon Zero Elements of 1st Matrix are :- " << NonZeroA;

    int SparsMatrixA[3][NonZeroA], k1 = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[i][j] != 0)
            {
                SparsMatrixA[k1][0] = i;
                SparsMatrixA[k1][1] = j;
                SparsMatrixA[k1][2] = A[i][j];
                k1++;
            }
        }
    }
    // Printing SparsMatrixA
    cout << "\n";
    cout << " " <<  size << "  " << size << "  " << NonZeroA << "\n";
    for (int i = 0; i < NonZeroA; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << SparsMatrixA[i][j] << " ";
        }
        cout << "\n";
    }
}