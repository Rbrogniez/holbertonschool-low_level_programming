#include "main.h"
#include <ctype.h>
/**
 * int _isdigit - checks for a digit (0 through 9)
 * @c:
 * Return:
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
