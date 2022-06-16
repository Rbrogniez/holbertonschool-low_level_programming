#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *@s: string
 */

void print_rev(char *s)

{
	int c = 0;
	int d;

		while (s[c] != '\0')

	{c++;}

	c = c -1;
	
	for (d = c ; d >= '\0'; d--)
	{
		_putchar (s[d]);
	}
	_putchar ('\n');

}
