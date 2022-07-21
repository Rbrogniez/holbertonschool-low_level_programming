#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print double linked list.
 * @h: head of the list.
 * Return: size of the list.
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t i = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}


