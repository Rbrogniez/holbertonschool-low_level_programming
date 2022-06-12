#include "main.h"
/**
*print_last_digit - print last digit of x
*@x: element
*Return: always 0
*/
int print_last_digit(int x)
{
	int lastdigit;
	lastdigit = x % 10;
	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar ('0'+lastdigit);
	return (lastdigit);
}
