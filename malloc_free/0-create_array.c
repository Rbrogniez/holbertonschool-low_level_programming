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

char *create_array(unsigned int size, char c)

{

char *tab = malloc(size * sizeof(char));
unsigned int i = 0;

if (tab == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	tab[i] = c;
}
if (size == 0)
{
return (NULL);
}


return (tab);

}
