#include<stdio.h>

int main(){
    int a;
    float b=0;
    for(a=1; a<=5; a++){
        printf("%d \n", a);
        b=a+b;
    }
    b=b/5;
    printf("result=%f", b);
    return 0;

}