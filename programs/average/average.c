#include <stdio.h>

int main()
{
    int a, b, c;
    float avg;

    printf("enter Physics marks : ");
    scanf("%d", &a);
    printf("enter Chemistry marks : ");
    scanf("%d", &b);
    printf("enter Mathematics marks :");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    printf("Average of three subjects is : %f", avg);
    if (avg > 90)
    {
        printf("distinction");
    }
    else if (avg > 50 && avg < 90)
    {
        printf("first class");
    }
    else if (avg <= 50)
    {
        printf("average");
    }
    else
    {
        printf("not a valid ans");
    }
    return 0;
}
