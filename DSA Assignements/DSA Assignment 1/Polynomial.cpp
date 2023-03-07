#include <iostream>
inline int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
using namespace std;
int main()
{
    int exp1[20], exp2[20], expSum[20], degree1, degree2, maxDegree, j = 0, k = 0;
    // For Getting Expression 1 
    cout << " Enter Highest Degree of 1st Expression : ";
    cin >> degree1;
    for (int i = 0; i < degree1; i++)
    {
        cout << " Enter Coeff of " << i  << ":";
        cin >> exp1[i];
    }
    // For Getting Expression 2 
    cout << " Enter Highest Degree of 2nd Expression : ";
    cin >> degree2;
    for (int i = 0; i < degree2; i++)
    {
        cout << " Enter Coeff of " << i << ":";
        cin >> exp2[i];
    }

    maxDegree = max(degree1, degree2);
    for (int i = 0; i < maxDegree; i++)
    {
        expSum[i] = 0;
        if (j < degree1 && j == i)

            expSum[i] += exp1[j++];

        if (k < degree2 && k == i)
            expSum[i] += exp2[k++];
    }

    // Print Addition of
    cout << " Addition = ";
    for (int i = 0; i < maxDegree; i++)
    {
        if (expSum != 0)
        {
            cout << expSum[i] << "^" << (i + 1) << " + ";
        }
    }
}