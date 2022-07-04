#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all parameters
* @n: the numbers of arguments being passed through
* Return: the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)

{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg(args, const unsigned int);
	va_end(args);
	return (sum);
}
