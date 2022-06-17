#include "main.h"
/**
 * _strncpy - Copy the second string to the first with only n char
 *
 * @dest: The first string
 * @src: The second string
 * @n: The number of char copied
 *
 * Return: The copied string dest
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
