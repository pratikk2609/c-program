//page 61 img

#include<stdio.h>

int main()
{
    int qty, dis=0;
    float rate, total;
    printf("enter quantity and rate:");
    scanf("%d %f", &qty, &rate);

    if(qty>1000);
    dis=10;

    total=(qty* rate)-(qty * rate * dis/ 100);
    printf("total expenses=Rs %f\n", total);

    return 0;
}