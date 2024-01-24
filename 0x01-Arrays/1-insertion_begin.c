#include "array.h"

/**
 * main - entry point
 * Description: add the beginning
 * Return: 0
 */

int main()
{
	int a[5] = {0, 1, 2, 3, 4}, i;

	a[0] = 6;


	for (i = 0; i < 6; i++)
		printf("%d\n", a[i]);

	return (0);
}
