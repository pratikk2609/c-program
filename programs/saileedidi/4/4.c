#include <stdio.h>
#include <math.h>
int main()
{
    int i, firstnum, endnumber;
    printf("Enter the first number:");
    scanf("%d", &firstnum);
    printf("Enter the second number:");
    scanf("%d", &endnumber);

    printf("perfect squares between %d and %d: \n", firstnum, endnumber);
    for (i = firstnum; i <= endnumber; i++)
    {
        double sqr = sqrt(i);
        if (sqr - floor(sqr) == 0)
            printf("%d ", i);
    }
    return 0;
}