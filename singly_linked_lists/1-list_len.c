#include "lists.h"

/**
 * print_list - function that prints all the elements of a struct list
 * @h: a pointer to a struct
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)

{
	size_t index = 0;

	for (; h != NULL; h = h->next, index++);
	return (index);

}
