//
#include<stdio.h>

int main()
{
    int i, sv, ev, sum=0, temp;
    printf("enter starting value:");
    scanf("%d", &sv);
    printf("enter ending value:");
    scanf("%d", &ev);
    if(sv > ev)

    {
        temp=sv;
        sv=ev;
        ev=temp;
    }


    for(i=sv; i<=ev; i++)
    {
        if(i % 4== 0){
            sum=sum +i;
        }
 
       }
       printf("sum is: %d" , sum);
}