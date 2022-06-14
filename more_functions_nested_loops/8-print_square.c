#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: is the size of the square
 */

void print_square(int size)

{
		int square;
		int addsquare;

		if (size <= 0)
	{
		_putchar ('\n');
	}

	else

	{
		for (square = 0; square < size; square++)
		{
			for (addsquare = 0; addsquare < size; addsquare++)
			{
			 _putchar ('#');
			}

		_putchar ('\n');

		}
	}
}

