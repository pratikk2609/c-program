//taking length of three sides of triangle and printing if triangle is equilateral, isosceles, or scalene

#include<stdio.h>

int main()
{
    int side1; int side2; int side3;
    printf("enter the length of 1st side : ");
    scanf("%d", &side1);
    printf("enter the length of 2nd side : ");              
    scanf("%d", &side2);
    printf("enter the length of 3rd side : ");
    scanf("%d", &side3);

    if(side1 == side2 && side2 == side3){
        printf("\n Triangle is equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("\n Triangle is isosceles");
    }
    else 
    {
        printf("\n Triangle is scalene");
    }
    
    return 0;
    }