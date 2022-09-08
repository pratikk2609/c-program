// reverse

#include <stdio.h>
int main()
{
    int x, y = 0, r;
    printf("enter a number: ");
    scanf("%d", &x);

    while (x != 0)
    {
        r = x % 10;
        y = y * 10 + r;
        x = x / 10;
    }

    printf("reverse is %d", y);
    return 0;
}