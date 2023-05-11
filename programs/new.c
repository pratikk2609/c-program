#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
        printf("Triangle is equilateral");
    else if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (c * c) + (b * b) == (a * a))
        printf("Triangle is Right Angled Triangle");
    else if (a == b || b == c || c == a)
        printf("Triangle is isosceles");
    else
        printf("Triangle is scalene");
    return 0;
}