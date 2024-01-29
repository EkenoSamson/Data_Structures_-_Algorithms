#include "strings.h"

/**
 * main - array of character
 *
 * Return: 0
 */

int main(void)
{
	char a[6];
	char b[6] = "School";

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	*(a + 3) = 'o';
	a[4] = 'o';
	a[5] = 'l';

	printf("%s\n", a);
	printf("%s\n", b);

	return (0);
}

