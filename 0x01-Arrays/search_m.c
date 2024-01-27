#include "array.h"

int main(void)
{
	int arr[4] = {37, 8, 9, 11};
	int n = sizeof(arr) / sizeof(int);
	int pos = findelement(arr, 11, n);

	if (pos == -1)
		printf("Element not found\n");
	else
		printf("Element found at %d\n", pos + 1);
	return (0);
}
