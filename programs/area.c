#include <stdio.h>
float area(int r)
{
    return (22 * r * r) / 7;
}
int main()
{
    int r;
    float a;
    printf("enter radius of the circle: ");
    scanf("%d", &r);
    a = area(r);
    printf("area of the circle: %f\n", a);
    return 0;
}