#include <stdio.h>

int main()
{
    int secretNum = 0;
    scanf("%d", &secretNum);
    int arr[10];
    for (int i=0; i<10; i++)
    {
        arr[i] = i * i;
    }

    for (int i=0; i<10; i++)
    {
        if (arr[i]==secretNum)
        {
            printf("Found the secret number (%d) in array at position %d", secretNum, i);
            break;
        }

    }

    return 0;
}