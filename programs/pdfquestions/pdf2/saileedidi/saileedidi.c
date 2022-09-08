// using if else

#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter the number >2 : ");
    scanf("%d", &n);
    printf("%d", fib(n - 1));
    return 0;
}
