#include <stdio.h>

int strLen(char string[]);

int main()
{
    char givenString[100];
    printf("Enter the string: ");
    scanf("%s", givenString);
    printf("\nLength of the given string is: %d\n", strLen(givenString));
}

int strLen(char string[])
{
    int count= 0;
    for (int i = 0; string[i] != '\0'; i++)
        count++;
    return count;
}