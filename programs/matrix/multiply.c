#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5], b[5][5], c[5][5], i, j, k, s;
    int r1, c1, r2, c2;
    printf("enter the row and column of first matrix : ");
    scanf("%d%d", &r1, &c1);
    printf("enter the row and column of second matrix : ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2)
    {
        printf("\n Matrices are not multiplicable");
        exit(0);
    }
    printf("\n Enter elements of Matrix A : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter elements of Matrix B : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n Matrix A : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix B : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            s = 0;
            for (k = 0; k < c1; k++)
            {                                                   
                s = s + a[i][k] * b[k][j];
                c[i][j] = s;
            }
        }
    }
    printf("\n Product of Matrix : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}