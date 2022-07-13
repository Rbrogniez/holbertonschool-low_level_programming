#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: a pointer to a struct
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)

{
	size_t index = 0;

	for (; h != NULL; h = h->next, index++)
	;

	return (index);

}
