#include "strings.h"

/**
 * main - addresses of variables
 * This example will not compile with regular flags 
 * -Wall -Wextra -Werror -pedantic -std=gnu89
 * Return: 0
 */

int main(void)
{
	char c;
	int n;

	printf("Address of variable 'c': %p\n", &c);
	printf("Adrress of variable 'n': %p\n", &n);

	return (0);
}
