#include "array.h"

int main(void)
{
	int i;
	int arr[20] = {1, 2, 3, 4};
	int n = 4 , elem = 45, pos = 22;
	
	printf("Before insertion\n");
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	printf("After insertion\n");
	n = insertany(arr, n, pos, elem);
	for (i = 0; i < 25; i++)
		printf("%d\n", arr[i]);
	return (0);
}
