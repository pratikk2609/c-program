// fgets(str, n, file) // file name stdin (standard input)
// stops when n-1 chars input or new line is entered
#include <stdio.h>

void printString(char arr[]);

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    puts(str); // gives next line
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