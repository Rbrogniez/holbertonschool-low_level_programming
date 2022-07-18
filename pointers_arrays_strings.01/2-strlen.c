#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string to evaluate
 * Return: String
 */

int _strlen(char *s)
{
		int c = 0;

		while (s[c] != '\0')
			c++;
		return (c);
}

