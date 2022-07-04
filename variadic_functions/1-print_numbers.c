#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator of intreger
 * @n: number of intreger
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

	va_list args;
	unsigned int i;

	va_start(args, n);


	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}

