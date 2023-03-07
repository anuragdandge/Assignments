#include <stdio.h>
int main()
{
    int P1[50], P2[50], P3[50], deg1, deg2, deg3 ,i, j = 0, k = 0;
    printf("\nEnter the highest degree of the first polynomial:");
    scanf("%d", &deg1);
    printf("Enter the first polynomial:");
    for (i = 0; i < deg1; i++)
    {
        printf("\nEnter the co-efficient of the term %d:", i + 1);
        scanf("%d", &P1[i]);
    }
    printf("\nEnter the highest degree of the second polynomial:");
    scanf("%d", &deg2);
    printf("Enter the second polynomial:");
    for (i = 0; i < deg2; i++)
    {
        printf("\nEnter the co-efficient of the term %d:", i + 1);
        scanf("%d", &P2[i]);
    }
    deg3 = (deg1 > deg2) ? deg1 : deg2;
    for (i = 0; i < deg3; i++)
    {
        P3[i] = 0;
        if (j < deg1 && j == i)

            P3[i] += P1[j++];

        if (k < deg2 && k == i)
            P3[i] += P2[k++];
    }

    printf("\nFirst polynomial:\n");
    for (i = deg1 - 1; i >= 0; i--)
    {
        if (P1[i] != 0)

            printf("%dX^%d + ", P1[i], i + 1);
    }

    printf("\nSecond polynomial:\n");
    for (i = deg2 - 1; i >= 0; i--)
    {
        if (P2[i] != 0)
            printf("%dX^%d + ", P2[i], i + 1);
    }

    printf("\nAddition of polynomials:\n");
    for (i = deg3 - 1; i >= 0; i--)
    {
        if (P3[i] != 0)

            printf("%dX^%d + ", P3[i], i + 1);
    }
    return 0;
}
