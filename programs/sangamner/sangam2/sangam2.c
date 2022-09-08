//addition of matrix
#include<stdio.h>
int main()
{
    int a[2][3], b[2][3], c[2][3], i, j;
    printf("Enter first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

printf("first matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            print("%d", &a[i][j]);
        }
    }

    printf("second matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", &b[i][j]);
        }
        printf("\n");
    }
}