// strlen(str) count number of characters excluding '\0'
// strcpy(newStr, oldStr) copies value of old string to new string
// strcat(firstStr, secStr) concatenates first String with second; concatenation-joins no space
// strcmp(firstStr, secStr) compares 2 strings and returns the value; positive=first>second; negative=first<second
#include <stdio.h>
#include <string.h>

int main()
{
    // char oldStr[] = "oldStr";
    // char newStr[] = "newStr";
    // strcpy(newStr, oldStr);
    // puts(newStr);

    char firstStr[100] = "hello";
    char secString[] = "world";
    strcat(firstStr, secString);
    puts(firstStr);
}