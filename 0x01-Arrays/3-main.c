#include "array.h"

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int i;

	printf("Before reversal\n");
	for (i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	printf("After reversal\n");
	reversearr(arr, 0, 5);
	for (i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	return (0);
}
