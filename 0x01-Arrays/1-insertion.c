#include "array.h"

/**
 * main - entry point
 * Description: performing array insertion
 * Return: 0
 */

int main()
{
	int a[6] = {1, 2, 3, 4, 5, 6}, i;

	/*insertion in the end*/
	a[6] = 89; 

	for (i = 0; i < 7; i++)
		printf("\n%d", a[i]);

	return (0);
}
