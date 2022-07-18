#include "main.h"
/**
 * *_strcpy - copy the string pointed including the terminating null byte
 * @src: string 1 copy in dest
 * @dest: string 2 copy of src
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{

int c;

{
for (c = 0; src[c] != '\0'; c++)
{
dest[c] = src[c];
}
dest[c] = '\0';
return (dest);
}

}
