#include "strings.h"

int main(void)
{
	char *s = "School"; /* terminator '\0' */
	char *d = "Job";  /* variable for storing address */
	int count = 0, i = 0;
	
	printf("%s\n", s);
	printf("%s\n", d);

	/* Find the length of the string
	 * Get to the end (Second last element of the string)
	 * print the element then decrement
	 */
	while (*s != '\0')
	{
		count++;
		s++;
	}
	/*Pointer is at the last element */
	s--;
	

	printf("Reversing...\n");
	while (count > -1)
	{
		printf("%c", *s);
		s--;
		count--;
	}
	printf("\n");

	
	while (d[i] != '\0')
		i++;
	/* iterator will be pointing at the null terminator */
	i--;
	while (i >= 0)
	{
		printf("%c", d[i]);
		i--;
	}
	printf("\n");

	printf("%s\n", s);
	printf("%s\n", d);


	return (0);
}

