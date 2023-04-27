#include <stdio.h>
int sum();
void main()
{
    int result;
    result = sum();
    printf("sum of two nos is = %d", result);
}
int sum()
{
    int a, b;
    printf("\nEnter two numbers ");
    scanf("%d %d", &a, &b);
    return a + b;
}