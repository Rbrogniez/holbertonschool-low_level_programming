#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: the number of elements
 * @size: the size of that element type
 *
 * Return: A pointer to the allocated memeory. NULL if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *m;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	f = m;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (m);

}
