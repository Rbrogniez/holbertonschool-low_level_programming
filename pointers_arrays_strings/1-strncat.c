#include "main.h"
/**_strncpy - function that copies a string
*@dest: receive string copy of src
*@src: sting copy in dest
*@n: copy n bytes of src
*Return: a pointer of variable dest string
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
