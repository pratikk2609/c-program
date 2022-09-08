// write a program to store the first n fibonacci numbers
//  fibonacci = sum of 2 preciding numbers

#include <stdio.h>

int main()
{
    int n;
    printf("enter n (n>2) : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("%d \t", fib[0]);
    printf("%d \t", fib[1]);
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // important line
        printf("%d \t", fib[i]);
    }

    printf("\n");
    return 0;
}