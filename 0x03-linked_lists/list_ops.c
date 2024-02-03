#include "lists.h"

/**
 * push - inserts a node at the beginning of a linked list
 * @list: the list to insert into
 * @data: the data for the new node/element
 */
void push(list_t *list, int data)
{
	node_t *new_node;

	if (list == NULL)
	{
		fprintf(stderr, "Error: The list is not initialized\n");
		return;
	}

	new_node = malloc(sizeof(node_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return;
	}

	new_node->data = data;

	if (list->size == 0)
	{
		list->head = new_node;
		list->tail = new_node;
	}
	else
	{
		new_node->next = list->head;
		list->head = new_node;
	}

	list->size++;
}

/**
 * append - inserts a node at the end of a linked list
 * @list: the list to insert into
 * @data: the data for the new node/element
 */
void append(list_t *list, int data)
{
	node_t *new_node;

	if (list == NULL)
	{
		fprintf(stderr, "Error: The list is not initialized\n");
		return;
	}

	new_node = malloc(sizeof(node_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return;
	}

	new_node->data = data;
	new_node->next = NULL;

	if (list->size == 0)
	{
		list->head = new_node;
		list->tail = new_node;
	}
	else
	{
		list->tail->next = new_node;
		list->tail = new_node;
	}

	list->size++;
}
