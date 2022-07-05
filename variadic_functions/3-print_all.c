#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(char *seperator, va_list args)
{
	printf("%s%c",seperator, va_arg(args,int));
}

void print_integrer(char *seperator, va_list args)
{
	printf("%s%i",seperator, va_arg(args, int));
}

void print_float(char *seperator, va_list args)
{
	printf("%s%f",seperator, va_arg(args, double));
}

void print_str(char *seperator, va_list args)
{
	char *str = va_arg (args, char*);

	printf("%s%s", seperator, str);
}

/**
 * print_all -
 * @format:
 */
void print_all(const char * const format, ...)
{

type_t array[] = {
	{"c",print_char},
	{"i",print_integrer},
	{"f",print_float},
	{"s",print_str},
	{NULL,NULL},
};

int i = 0;
char *separator = "";
va_list (args);
va_start (args, format);

while (format != NULL && format[i])
{
	int b = 0;
	while (array[b].choice)

	{
		if (format[i] == *array[b].choice)
			{
			array[b].f(separator,args);
			separator = ", ";
			}
	b++;
	}
i++;
}
va_end (args);
printf ("\n");
}

