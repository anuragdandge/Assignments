#include <iostream>
using namespace std;
int main()
{
    //     int arr[3][3], nonzero = 0;
    //     cout << " Enter Elements :";
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             cin >> arr[i][j];
    //         }
    //     }
    //     cout << " Array  Elements :\n";
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //         cout << "\n";
    //     }
    //     // To Check Non Zero Element count
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             if(arr[i][j] != 0){
    //                 nonzero++;
    //             }
    //         }
    //     }
    //     cout << " Non Zero Elements = " << nonzero;
    //     //  row    col    elem

    // }

    int a[3][3], spar[16][13], i, j, c = 0, d;
    printf("enter the values for a matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter element : ");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
                spar[c][0] = a[i][j];
                spar[c][1] = i;
                spar[c][2] = j;
                c++;
            }
        }
    }
    printf("\n sparse matrix is \n ");
    for (i = 0; i < c; i++)
    {
        printf("\n%d\t%d\t%d", spar[i][0], spar[i][1], spar[i][2]);
    }

    for (i = 0; i < c; i++)
    {
        d = spar[i][1];
        spar[i][1] = spar[i][2];
        spar[i][2] = d;
    }
    printf("\n TRanspose of sparse matrix is \n ");
    for (i = 0; i < c; i++)
    {
        printf("\n%d\t%d\t%d", spar[i][0], spar[i][1], spar[i][2]);
    }
    return 0;
}