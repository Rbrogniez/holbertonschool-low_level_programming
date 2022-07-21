#include "lists.h"
/**
 * @brief
 * @param head
 * @param n
 * @return dlistint_t*
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *t, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new;
	}

	return (new);
}
