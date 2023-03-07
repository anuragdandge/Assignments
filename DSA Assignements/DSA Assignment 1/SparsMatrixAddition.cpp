#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of Matrix ";
    cin >> size;
    int A[size][size], B[size][size], SparsAdd[size][size], NonZeroA = 0, NonZeroB = 0;
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
    cout << " Elements of Matrix 1st :\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << A[i][j] << " ";
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
    cout << size << " " << size << " " << NonZeroA << "\n";
    for (int i = 0; i < NonZeroA; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << SparsMatrixA[i][j] << " ";
        }
        cout << "\n";
    }

    // Getting Elements for B Matrix
    cout << "Enter Elements for Matrix B:\n ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> B[i][j];
        }
    }
    // Printing Elements for B Matrix
    cout << " Elements of Matrix 2nd :\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
    // Counting NonZero Elements for B Matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (B[i][j] != 0)
            {
                NonZeroB++;
            }
        }
    }
    int SparsMatrixB[3][NonZeroB], k2 = 0;
    // Inserting NonZero Elements and their positions in "SparsMatrixB"
    cout << "\nNon Zero Elements of 2nd Matrix are :- " << NonZeroB;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (B[i][j] != 0)
            {
                SparsMatrixB[k2][0] = i;
                SparsMatrixB[k2][1] = j;
                SparsMatrixB[k2][2] = B[i][j];
                k2++;
            }
        }
    }
    // Printing SparsMatrixB
    cout << "\n";
    cout << size << " " << size << " " << NonZeroB << "\n";
    for (int i = 0; i < NonZeroB; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << SparsMatrixB[i][j] << " ";
        }
        cout << "\n";
    }
    // Addition of two Spars matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            SparsAdd[i][j] = A[i][j] + B[i][j];
        }
    }
    // Print Addition of two Spars Matrix
    cout << " Addition of two Spars Matrix \n ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << SparsAdd[i][j] << " ";
        }
        cout << "\n";
    }
}