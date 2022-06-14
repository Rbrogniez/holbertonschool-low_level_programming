#include "main.h"
/**
 *print_line - raws a straight line in the terminal.
 *@n: number of the line
 */

void print_line(int n)

{
	int line;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
		_putchar ('_');
		}
		_putchar ('\n');
	}
}
