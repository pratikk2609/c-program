#include<stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    
    //address
    printf("%p\n" , &age); // address 
    printf("%u\n", &age); // memory address in numbers // address of age and ptr is same
    printf("%u\n", &ptr);
    return 0;

}