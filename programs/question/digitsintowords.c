#include<stdio.h>

int main()
{

int digit, reminder, division;
do{
    printf("enter digit below 1000:");
    scanf("%d", &digit);

    //printf("%d", digit >= 1000 || digit <=0);

}while( digit >= 1000 || digit <=0 );


reminder = digit%100;
division = digit/100;

//printf("reminder is %d and division is %d", reminder, division);

switch(division)
{
    case 0:
    //printf("zero");
            break;
    case 1:printf(" one hundred");
            break;
    case 2:printf(" two hundred");
            break;
    case 3:printf(" three hundred");
            break;
    case 4:printf(" four hundred");
            break;
    case 5:printf(" five hundred");
            break;
    case 6:printf(" six hundred");
            break;
    case 7:printf(" seven hundred");
            break;
    case 8:printf(" eight hundred");
            break;
    case 9:printf(" nine hundred");
            break;

}

division=reminder/10;
reminder=reminder%10;

switch(division)
{
    case 0:
    //printf("zero");
            break;
    case 1:
        switch (reminder)
        {
        case 1:
                printf(" eleven");
                break;
                case 2:
                printf(" twelve ");
                break;
                case 3:
                printf(" thirteen");
                break;
                case 4:
                printf(" fourteen");
                break;
                case 5:
                printf(" fifteen");
                break;
                case 6:
                printf(" sixteen");
                break;
                case 7:
                printf(" seventeen");
                break;
                case 8:
                printf(" eighteen");
                break;
                case 9:
                printf(" ninteen");
                break;
        
        default:
                break;
        }
    printf("one");
            break;
    case 2:printf(" and twenty");
            break;
    case 3:printf(" and thirty");
            break;
    case 4:printf(" and fourty");
            break;
    case 5:printf(" and fifty");
            break;
    case 6:printf(" and sixty");
            break;
    case 7:printf(" and seventy");
            break;
    case 8:printf(" and eighty");
            break;
    case 9:printf(" and ninety");
            break;
}
switch(reminder)
{
    case 0:
    //printf("zero");
            break;
    case 1:printf(" one");
            break;
    case 2:printf(" two");
            break;
    case 3:printf(" three");
            break;
    case 4:printf(" four");
            break;
    case 5:printf(" five");
            break;
    case 6:printf(" six");
            break;
    case 7:printf(" seven");
            break;
    case 8:printf(" eight");
            break;
    case 9:printf(" nine");
            break;
}

    printf("\nhello");
    return 0;
}