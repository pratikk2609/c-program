// malloc() memory allocation
// takes the number of bytes to be allocated and returns the pointer of a type void
// ptr=(*int)malloc(5* sizeof(int));

// calloc() continuous allocation, initializes with 0

// free() we use it tofree memory that is allocated using malloc and calloc; free(ptr);

// realloc() reallocate(increase or decrease) memory using the same pointer and size; ptr = realloc(ptr,newSize);

#include <stdio.h>

int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    return 0;
}