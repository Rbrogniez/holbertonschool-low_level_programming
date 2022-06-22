#include <stdio.h>
#include "main.h"
/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: argument value
 * Return: success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
