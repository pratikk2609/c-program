#include<stdio.h>

int main(){
    int a, from, to;
    int b=0;
    printf("enter from number");
    scanf("%d", &from );
    printf("enter to number");
    scanf("%d", &to );
    for(a=from; a<=to; a++){
        printf("%d \n", a);
        b=a+b;
    }
    printf("addition is:%d" , b);
    b=b/(to-from + 1);
    printf("\n result=%d", b);
    return 0;

}