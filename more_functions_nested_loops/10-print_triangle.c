#include "main.h"
/**
 *
 *
 */

void print_triangle(int size)

{
	int square;
	int space;
	for (square = 0; square < size; square++)
		{
			for (space = 0; space < square; space++)
			{
				_putchar (' ');
			}

		_putchar ('#');

		_putchar ('\n');
		}
}
