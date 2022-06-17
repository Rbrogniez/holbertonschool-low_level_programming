#include "main.h"
/**
*_strncat - function
*@dest: destination string
*@src: dest string
*@n: number of bytes
*Return: value of dest
*/

char *_strncat(char *dest, char *src, int n)
{

	{

	int i, dest_len;

	i = 0;

	dest_len = 0;

	while (dest[i++])

		{
		dest_len++;
		}

	for (i = 0; src[i] && i < n; i++)

		{
		dest[dest_len++] = src[i];
		}

	return (dest);
	}
}
