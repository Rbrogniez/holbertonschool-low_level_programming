#include "lists.h"

/**
 * listint_len - Count the number of elements in a listint_t list
 *
 * @h: Head of the list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t i = 0;

	while (h != NULL)

	{
		h = h->next;
		i++;
	}

	return (i);
}

