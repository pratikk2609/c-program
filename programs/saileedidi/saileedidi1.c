// fibonacci series using while loop

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (n--)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}