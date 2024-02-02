#include "lists.h"

/**
 * init - initializes a linked list object
 * @cleanup: a user-defined function to handle memory deallocation
 *
 * Return: the newly created list object on success, NULL otherwise
 */
list_t *init(void (*cleanup)(void **))
{
	list_t *list = malloc(sizeof(list_t));

	if (list == NULL)
	{
		fprintf(stderr, "Error: List initialization failed\n");
		return (NULL);
	}

	list->size = 0;
	list->head = NULL;
	list->tail = NULL;
	list->cleanup = cleanup;

	return (list);
}

/**
 * _free - frees dynamically allocated memory
 * @ptr: a pointer to the memory location to deallocated
 */
void _free(void **ptr)
{
	if (ptr == NULL && *ptr == NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

/**
 * print_list - prints the contents of the linked list
 * @list: the linked list to print
 */
void print_list(list_t *list)
{
	node_t *temp;

	if (list == NULL)
	{
		fprintf(stderr, "Error: list is not initialized\n");
		return;
	}

	if (list->size == 0)
	{
		printf("Empty list\n");
		return;
	}

	temp = list->head;

	while (temp != NULL)
	{
		printf("[%p]: %d\n", (void *)temp, temp->data);
		temp = temp->next;
	}
}
