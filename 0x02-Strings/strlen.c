#include "strings.h"

/**
 * _strlen - lenght of string
 * @str: the string
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
