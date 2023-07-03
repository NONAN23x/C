#include <stdio.h>

int swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int selectionSort(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int minIndex = i;
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		swap(&arr[minIndex], &arr[i]);
	}
	printf("\n[ ");
	for (int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf(" ]\n");
}

int main()
{
	int arr[] = { 9, 8, 4, 3, 5, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	return 0;
}

