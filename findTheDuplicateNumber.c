#include <stdio.h>

int findTheDuplicateNumber(int arr[], int n);

int main(int argc, char const *argv[])
{
    int array[10];
    int foundAt = 0;
    int n = 0;
    n = sizeof(array)/sizeof(array[0]);

    printf("\nPlease Enter the elements for the array:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    
    foundAt = findTheDuplicateNumber(array, n);
    
    printf("\nThe duplicate number is %d\n", foundAt);
    return 0;
}

int findTheDuplicateNumber(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int  j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
            
        }
        
    }
    
}
