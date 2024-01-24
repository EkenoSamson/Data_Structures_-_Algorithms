#include "array.h"

/**
 * main - entry point
 * Description: demonstrating traversal
 * Return: 0 when successful
 */

int main()
{
	int a[5], size, i;
	printf("Enter size of array: ");
	scanf("%d", &size);

	for (i = 0; i < size; i++)
	{
		printf("Enter the elements of array: ");
		scanf("%d", &a[i]);
	}

	printf("Elements in array are: ");
	for (i = 0; i < size; i++)
		printf("%d\n", a[i]);

	return (0);
}


