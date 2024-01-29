#include "strings.h"

/**
 * main - strings introduction
 *
 * Return: 0
 */

int main(void)
{
	int number[5] = {1, 2, 3, 4, 5}, i; /* array of integers */
	char letter[5] = {'a', 'b', 'c', 'd', 'e'}; /* array of characters */

	for ( i = 0; i < 5; i++)
		printf("%d\n", number[i]);
    	/*decayed into pointer to an array; specifically to the first element of the arrayy */
	printf("%s\n", letter);

	return (0);
}

