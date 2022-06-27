#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array of chars, and initializes it with a
 *specific char.
 *@size: unsigned int
 *@c: char
 *Return: Tab
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

char *tab = malloc(size * sizeof(char));
unsigned int i = 0;

if (nmemb == 0 || size == 0)
		return (NULL);


for (i = 0; i < size; i++)
{
	tab[i] = nmemb;
}
if (size == 0)
{
return (NULL);
}


return (tab);

}
