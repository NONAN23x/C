#include <stdio.h>

int binarySearch(int arr[], int target, int n);

int main(int argc, char **argv[])
{
    int sortedArray[100], target, n, resultIndex;
    for (int i = 0; i < 100; i++)
    {
        sortedArray[i] = i;
    }
    printf("\nEnter a number: ");
    scanf("%d", &target);
    n = sizeof(sortedArray)/sizeof(sortedArray[0]);

    resultIndex = binarySearch(sortedArray, target, n) + 1;

    printf("\nInteger %d was found at position %d inside the array\n", target, resultIndex);
    
    return 0;
}

int binarySearch(int arr[], int target, int n)
{
    int low, high, mid = 0;
    low = 0;
    high = n;
    while (low <= high)
    {
        mid = (low+high)/2;
        if (target > arr[mid])
            low = mid + 1;
        else if (target < arr[mid])
            high = mid - 1;
        else
            return mid;

    }
}