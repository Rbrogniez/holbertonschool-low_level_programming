#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 */

char *create_array(unsigned int size, char c)

{

char *tab = malloc(size * sizeof(char));
unsigned int i = 0;

for (i = 0; i < size; i++)
{
	tab[i] = c;
}
if (size == 0)
{
return(NULL);
}

return (tab);

}
