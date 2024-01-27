#include "array.h"

int main(void)
{
	int arr[5] = {1, 2, 3, 4}, arr1[6] = {5, 1, 4, 2, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int elem = 12, i, num = 5;
	insertend(arr, n, elem);

	printf("Insertion at the end\n");
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	
	printf("Insertiona at any position\n");
	insertany(arr1, num, 0, elem);
	for (i = 0; i < 6; i++)
		printf("%d\n", arr1[i]);

	return (0);
}
