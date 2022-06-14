#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: numbers of diagonal
 */

void print_diagonal(int n)

{
		int backslash;
		int space;

	if (n <= 0)

	{
		_putchar ('\n');
	}

	else
	{

		for (backslash = 0; backslash < n; backslash++)
		{
			for (space = 0; space < backslash; space++)
			{
				_putchar (' ');
			}

		_putchar ('\\');

		_putchar ('\n');
		}
	}
}
