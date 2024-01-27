#include "array.h"

int main(void)
{
	int arr[5] = {1, 2, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	int elem = 12, i;
	insertend(arr, n, elem);
	
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return (0);
}
