#include<stdio.h>

void swap(int *, int *);

int main()
{
    int n1, n2;
    printf("enter first no: ");
    scanf("%d", &n1);
    printf("enter second no: ");
    scanf("%d", &n2);
    
    printf("before swapping n1:%d and n2:%d", n1, n2);
    swap(&n1, &n2);
    
    printf("\nafter swapping n1:%d and n2:%d", n1, n2);
}

void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}