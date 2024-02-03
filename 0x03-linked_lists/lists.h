#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node_s - blueprint for a singly linked list's node
 * @data: the integer data
 * @next: a pointer to the next node structure
 */
typedef struct node_s
{
	int data;
	struct node_s *next;
} node_t;

/**
 * struct list_s - blueprint for the linked list
 * @head: a pointer to the beginning of the linked list
 * @tail: a pointer to the end of the linked list
 * @size: the number of nodes in the linked list at a given moment
 * @cleanup: a function that handle the deallocation of memory
 */
typedef struct list_s
{
	node_t *head;
	node_t *tail;
	size_t size;
	void (*cleanup)(void **);
} list_t;

list_t *init(void (*cleanup)(void **));
void push(list_t *list, int data);
void append(list_t *list, int data);
void insert_at(list_t *list, int index, int data);
void pop(list_t *list);
void delete_at(list_t *list, int index);
void _free(void **ptr);
void print_list(list_t *list);

#define first(list) ((list)->head->data)
#define last(list) ((list)->tail->data)

#endif /* LISTS_H */
