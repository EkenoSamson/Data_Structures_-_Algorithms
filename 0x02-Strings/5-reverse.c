#include "strings.h"

/**
 * reverse - reverse a string in-place.
 * @str: The mutable string to reverse.
 *
 * Note: It is recommend to pass a mutable string as argument, else the
 * function will fail. It could either be an array-style defined string or
 * malloc'd string. Either way, it must be mutable for this function to work as
 * it requires the string to be mutable.
 *
 * Return: the reversed string.
 */
char *reverse(char *str)
{
	size_t len, i, mid;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*(str + len) != '\0')
		len++;

	mid = (len - 1) / 2;
	for (i = 0; i <= mid; i++)
	{
		char temp = *(str + i);

		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = temp;
	}

	*(str + len) = '\0';

	return (str);
}
