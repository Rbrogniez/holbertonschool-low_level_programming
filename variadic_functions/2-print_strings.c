#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator of intreger
 * @n: number of intreger
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;

	va_start(args, n);


	for (i = 0; i < n ; i++)
	{
		printf("%s", va_arg(args, const char*));
		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}

