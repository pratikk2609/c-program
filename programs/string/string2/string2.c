#include <stdio.h>

void printString(char arr[]);

int main()
{
    char str[100];
    gets(str); // input
    puts(str); // puts prints the value again // output
    return 0; 
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}