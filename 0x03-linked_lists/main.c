#include "lists.h"

/**
 * main - driver code
 *
 * Return: 0
 */
int main(void)
{
	list_t *list = init(_free);

	if (list == NULL)
	{
		exit(EXIT_FAILURE);
	}

	push(list, 5);
	push(list, 10);
	append(list, 100);
	push(list, 0);
	append(list, 25);
	push(list, 98);
	append(list, 9383);
	push(list, -34);

	print_list(list);

	return (0);
}
