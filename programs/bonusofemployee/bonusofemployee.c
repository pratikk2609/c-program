//if the employee has served for more than 3 years he gets a bonus of 2500
// current year, year of joining, years of service;

#include<stdio.h> 

int main()
{
    int bonus, cy, yoj, yos=0;


    printf("\n enter current year:");
    scanf("%d", &cy);
    printf("\n enter year of joining: ");
    scanf("%d", &yoj);

    yos=cy-yoj;
    if(yos > 3)
    {
        bonus= 25000;
        printf("bonus=Rs. %d\n", bonus);
    }


return 0;

}