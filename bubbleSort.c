#include <stdio.h>

int swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = 0; j < n-1-i; j++)
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
	printf("\n[ ");
	for (int i =0; i < n; i++)
		printf("%d ", arr[i]);
	printf(" ]\n");
}

int main()
{
	int arr[] = { 10, 5, 3, 9, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	return 0;
}
