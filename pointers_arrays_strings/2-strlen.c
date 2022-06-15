#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return:
 */

int _strlen(char *s)

{
int c = 0;

while (s[c] != '\0')
c++;

return (c);
}


