#include "strings.h"

/**
 * main - array of character
 *
 * Return: 0
 */

int main(void)
{
	char a[6];

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	*(a + 3) = 'o';
	a[4] = 'o';
	a[5] = 'l';

	printf("%s\n", a);

	return (0);
}

