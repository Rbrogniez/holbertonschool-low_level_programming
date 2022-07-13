#include "lists.h"

/**
 *
 *
 */

size_t print_list(const list_t *h)

{
	size_t index = 0;

		for (; h != NULL; h = h->next, index++)

		if (h->str == NULL)
		{
			printf ("[0] (nil)\n");
		}

		else
	{
		printf ("[%i] %s\n", h->len, h->str );
	}

	return (index);

}
