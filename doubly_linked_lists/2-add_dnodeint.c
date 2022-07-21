#include "lists.h"

/**
 * add_dnodeint - Add node at the start of a dl list
 *
 * @head: Head of the list
 * @n: Value
 * Return: Address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);

	t->n = n;
	t->next = *head;
	*head = t;

	return (t);
}
