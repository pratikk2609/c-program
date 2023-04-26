#include <stdio.h>
void main()
{
    int a, b;

    printf("enter the values a and b : ");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("a and b are equal\n");
    else
        printf("a and b are not equal\n");
}