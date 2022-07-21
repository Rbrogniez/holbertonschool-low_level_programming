#include "lists.h"

/**
 * listint_len - Count the number of elements in a listint_t list
 *
 * @h: Head of the list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
