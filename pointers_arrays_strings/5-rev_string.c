#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 */

void rev_string(char *s)

{
	char temp;
	int c,i,j,n;
	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0, j = n - 1; i < j; ++i, --j);
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

