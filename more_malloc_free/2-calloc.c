#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: the number of elements.
 * @size: the size of that element type.
 * Return: A pointer to the allocated memeory. NULL if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *mem;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		mem[i] = 0;

	return (mem);
}
