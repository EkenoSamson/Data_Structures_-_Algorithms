#include "strings.h"

/**
 * main - using sizeof to dynamically determine the size of types char,
 * int and float
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int *p;

	printf("Size of char on my computer: %lu\n", sizeof(char));
	printf("Size of int on my computer: %lu\n", sizeof(int));
	printf("Size of float on my computer: %lu\n", sizeof(float));
	printf("Size of my int variable on my computer: %lu\n", sizeof(n));
	printf("Size of pointer on my computer: %lu\n", sizeof(p));

	return (0);
}	
