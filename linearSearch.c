//linearSearch.c
/*
This algorithm takes a hardcoded value as a target, performs a linear search for it in the given array, and prints found if its found, and not found if otherwise.
*/

#include <stdio.h>

int linearSearch(int target, int n, int array[])
{
    for (int i=0; i <= n-1 ; i++)
    {
        if (array[i] == target)
        {
            return 0;
            break;
        }
        else
        {
            return 1;
            break;
        }
    }

}

int main()
{
    int target = 1337;
    int n = 0;
    int result;
    int array[] = {10, 5, 6, 1, 2, 7, 4, 8, 9, 1337, 22, 80};
    n = sizeof(array)/sizeof(array[0]);

    result = linearSearch(target, n, array);
    
    if (result)
        printf("Element %d found inside the given array\n", target);
    else
        printf("Element %d not found.\n", target);

    return 0;
}
