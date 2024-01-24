#include "array.h"

int main()
{
	long unsigned int a[] = {0, 2, 3}, i, size;
/*	int b[2] = {1, 'i'};

	for (i = 0; i < 2; i++)
		printf("%d\n", b[i]);

	for (j = 0; j < 3; j++)
		printf("%lu\n", a[j]);
*/

	/* search operation
	 * for loop 
	 * if condition: element == 3? print the element
	 * Not 
	 */
/*	for (i = 0;i < (sizeof(a) / sizeof(int)); i++)
	{
		if (a[i] == 3)
			printf("%lu\n", a[i]);
	}
	printf("Not found\n");
*/

	/* Insertion 
	 * Adding at the end
	 * size of array = sizeof(a) / sizeof(int)
	 * if size is n; at the moment last element is n - 1; adding at the end : a[size of array] = element
	 * print the array.
	 */
	size = sizeof(a) / sizeof(a[i]);
	printf("Size of array: %lu\n", size);
	a[4] = 4; 
	printf("Size of array: %lu\n", (sizeof(a) / sizeof(a[i])));
	for (i = 0; i < size + 1; i++)
		printf("%lu\n", a[i]);

	return (0);
}

