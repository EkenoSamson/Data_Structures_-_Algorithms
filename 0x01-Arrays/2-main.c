#include "array.h"

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]), i;

	printf("Before deletion\n");
	for (i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	printf("After deletion\n");
	deleteany(arr, n, 1);
	for (i = 0; i < 4; i++)
		printf("%d\n", arr[i]);
	return (0);
}
